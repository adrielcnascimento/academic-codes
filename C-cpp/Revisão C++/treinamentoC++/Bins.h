/* Bins.h
   Possível array de caixas (bins) para o RadixSort
*/
#define TYPE	int

typedef struct t_bins *Bins;

Bins ConsBins( int n_bins, int items_per_bin );
/* Constrói um array de n_bins bins,
   cada um com items_per_bin espaços */

int AddItem( Bins b, TYPE item, int bin_index );
/* Adiciona item ao bin número bin_index
   Pre: b != NULL && item != NULL &&
        bin_index >= 0 && bin_index < n_bins
*/

TYPE *MergeBins( Bins b, TYPE *list );
/* Une os bins copiando todos os elementos nos 
   bins para dentro da lista, retorna um apontador para a lista
*/

void DeleteBins( Bins b );
/* Destrutor .. libera todo o espaço usado por b */
