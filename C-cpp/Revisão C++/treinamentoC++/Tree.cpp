/*Este programa mostra uma árvore binária*/

#include <stdio.h>
#include <stdlib.h>

struct tree {
       char info;
       struct tree *left;
       struct tree *right;
};

struct tree *root;
struct tree *stree( struct tree *root, struct tree *r, char info);
void print_tree( struct tree *root, int l);
void inorder( struct tree *root );
void preorder( struct tree *root );
void postorder( struct tree *root );

main()
{
      char s[80];
      
      root = NULL;
      
      do{
           printf( "Insira uma letra: " );
           gets(s);
           if(!root)
           {
              root = stree( root, root, *s );
           }else{
              stree( root, root, *s );
           }
      }while(*s);
      
      //print_tree(root, NULL);
      
      printf( "\n\nOrdenada:  " );
      inorder( root );
      
      printf( "\nPreordenada:  " );
      preorder( root );
      
      printf( "\nPos-ordenada:  " );
      postorder( root );
      
      printf("\n\n\t");
      system("pause");
      return 0;
      
}

struct tree *stree( struct tree *root, struct tree *r, char info )
{
       if( !r )
       {
           r = ( struct tree* ) malloc( sizeof( struct tree ) );
           if( !r )
           {
               printf( "Sem memória =(\n" );
               exit(0); //1?
           }
       
           r->left = NULL;
           r->right = NULL;
           r->info = info;
       
           if(!root) return r; // nao tem raiz, logo eh a primeira entrada
           if( info < root->info ) root->left = r; 
           else  root->right = r;
           return r;
       }
       printf("___");
       //insere ordenado
       if( info < r->info ) 
       {
           stree( r, r->left, info );
       }else
       {
           stree( r, r->right, info );
       }
       return r;

}

void print_tree( struct tree *r, int l )
{
       int i;
       
       if( !r ) return; //chegou ao filho de um node folha
       
       print_tree( r->right, l+1 );
       for( i = 0; i < l; l++ ) // imprime espacos neceessarios
       {
           printf( " " );            
       }          
       printf("%c\n", r->info);
       print_tree( r->left, l+1 );       
}

void inorder( struct tree *root )
{
       if( !root ) return; //chegou ao filho de um node folha
       inorder( root->left );
       printf("%c ", root->info );
       inorder( root->right );
}

void preorder( struct tree *root)
{
     if(!root ) return;
     
     if( root->info ) printf( "%c ", root->info );
     preorder(root->left);
     preorder(root->right);
}

void postorder( struct tree *root )
{
     if( !root ) return;
     
     postorder(root->left);
     postorder(root->right);
     if( root->info ) printf( "%c ", root->info );
}
