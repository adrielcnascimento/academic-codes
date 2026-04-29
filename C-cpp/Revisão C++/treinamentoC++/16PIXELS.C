#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

#define PI 3.1415926535897932384626433832795

main()
{
   int gdriver = DETECT, gmode, errorcode, color, x, y, i, pedido, ang;

   srand(time(NULL));

   printf("Quantas vezes aparecerao os pixels na tela? ");
   scanf("%d", &pedido);

   initgraph(&gdriver, &gmode, "../bgi");
   errorcode = graphresult();

   if (errorcode != grOk)
   {
      printf("Erro gr fico: %s\n", grapherrormsg(errorcode));
      printf("Pressione qualquer tecla para continuar...");
      getch();
      exit(1);
   }


   for(i = 0 ; i < pedido ; i++)
   {

      y = rand()%getmaxy();
      do
      {
	 color = rand()%16;
      } while(color == 0);

      ang = (rand()%4+3)*6;

      if(rand()%2)
	 for( x = rand()%getmaxx() ; x <= getmaxx() ; x++)
	 {
	    setfillstyle(1, color);
	    setcolor(color);
	    bar(x, y+30*sin((PI/ang)*x), x+3, (y+30*sin((PI/ang)*x))+3);
	    delay(10);
	    cleardevice();
	 }
      else
	 for( x = rand()%getmaxx() ; x >= 0 ; x--)
	 {
	    setfillstyle(1, color);
	    setcolor(color);
	    bar(x, y+30*sin((PI/ang)*x), x-3, (y+30*sin((PI/ang)*x))-3);
	    delay(10);
	    cleardevice();
	 }
   }

   closegraph();
   printf("Pressione qualquer tecla para continuar...");
   getch();
   clrscr();
   return 0;
}