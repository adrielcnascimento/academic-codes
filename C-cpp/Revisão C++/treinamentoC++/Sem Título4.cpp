#include <graphics.h>
  
  int main() 
  { 
      initwindow(400,300); //Abrindo uma tela para os gráficos
      moveto(0,0);         //Movendo para o pixel 0,0 (0 colunas e 0 linhas)
      lineto(50,50);       //Desenhando uma linha do pixel anterior até o pixel 50,50
      while(!kbhit());     //Esperando pelo pressionamento de uma tecla
      closegraph();        //Fechando a tela dos gráficos.
      return 0; 
  } 
