
/* Bins.c
   Possível array de caixas (bins) para o RadixSort
*/

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "Bins.h"

struct t_bins {
  int n_bins, max_items;
  int *bin_cnt;
  TYPE **bin_pts;
};

/* Constrói um array de n_bins bins,
   cada um com items_per_bin espaços */
Bins ConsBins( int n_bins, int items_per_bin ) 
{
  Bins b;
  int i;
#ifdef ONE_LARGE
  int max;
  TYPE *bins;
#endif

/* fprintf(stdout, "ConsBins %d/%d ", n_bins, items_per_bin ); fflush( stdout ); */
  b = (Bins)malloc( sizeof( struct t_bins ) );
  if ( b != NULL ) {
    b->n_bins = n_bins;
    b->max_items = items_per_bin;
    b->bin_pts = (TYPE **)malloc( n_bins*sizeof(TYPE *) );
    b->bin_cnt = (int *)calloc( n_bins, sizeof(int) );
    if ( b->bin_pts != NULL ) 
    {
        
#ifdef ONE_LARGE  
      /* Aloca um bin de tamanho unitário */
      max = n_bins*items_per_bin*sizeof(TYPE);
      bins = malloc( max );
      if( bins == NULL ) {
        printf("ConsBins: memória insuficiente %d bytes necessários\n", max );
        return NULL;
        }
      /* Divide em n_bins, cada um contendo items_per_bin itens */
      for(i=0;i<n_bins;i++) 
      {
        b->bin_pts[i] = bins;
        bins += (items_per_bin);
      }
#else              
      /* Allocate n_bins individual bins */
      for(i=0;i<n_bins;i++) 
      {
        b->bin_pts[i] = (TYPE *)malloc( items_per_bin*sizeof(TYPE) );
        if( b->bin_pts[i] == NULL ) 
        {
          printf("ConsBins: memória insuficiente depois de %d bins\n", i );
          b = NULL; break;
        }
      }
#endif

    }
  }
  else 
  {
    fprintf( stdout, "Memória Insuficiente\n");
  }
  return b;
}
  
int AddItem( Bins b, TYPE item, int bin_index ) 
{
/* Adiciona item ao bin número bin_index
   Pre: b != NULL && item != NULL &&
        bin_index >= 0 && bin_index < n_bins
*/
  int k;
  assert( b != NULL );
  assert( bin_index >= 0 );
  assert( bin_index < b->n_bins );
  k = b->bin_cnt[bin_index];
  assert( (k>=0) && (k<b->max_items) );
  assert( (b->bin_pts[bin_index]) != NULL );
  (b->bin_pts[bin_index])[k] = item;
  b->bin_cnt[bin_index]++;
  return 1;
}

TYPE *MergeBins( Bins b, TYPE *list ) 
{
/* Une os bins copiando todos os elementos nos 
   bins 1..n_bins-1 para dentro da lista, retorna um apontador para a lista
   (Este apontador pode ser usado na próxima fase!)
*/
  int j, k;
  TYPE *lp;
  assert( b != NULL );
  assert( list != NULL );

  lp = list;
  for( j = 0; j<b->n_bins; j++ ) {
    for(k=0;k<b->bin_cnt[j];k++) {
      *lp++ = (b->bin_pts[j])[k];
      }
    }
  return list;
}

void FreeUnusedBins( Bins b  ) 
{
/* Libera os bins 1 .. n_bins-1 na preparação para a próxima fase */
  int k;
  assert( b != NULL );
#ifdef ONE_LARGE
  free( b->bin_pts[0] );
#else
  for(k=0;k<b->n_bins;k++) {
    assert( b->bin_pts[k] != NULL );
    free( b->bin_pts[k] );
    }
#endif
  free( b->bin_pts );
}

void DeleteBins( Bins b ) 
{
/* Destrutor .. libera todo o espaço usado por b */
  assert( b != NULL );
  FreeUnusedBins( b );
  free( b->bin_cnt );
  free( b );
}
