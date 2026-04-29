#include <dos.h>
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>

void som(int, int);

main()
{
   int gdriver = DETECT, gmode, errorcode, x = 125, y = 135;
   int poly[8] = {100,410,299, 410, 219, 479, 20, 479};


   srand(time(NULL));

   initgraph(&gdriver, &gmode, "../bgi");

   errorcode = graphresult();

   if (errorcode != grOk)
   {
	  printf("Graphics error: %s\n", grapherrormsg(errorcode));
	  printf("Pressione qualquer tecla para continuar:");
	  getch();
	  exit(1);
   }


   setfillstyle(1,1);
   bar3d(100, 90, 300, getmaxy()-70, 20, 2);
   bar3d(270, 20, 280, 85, 8, 10);

   setcolor(0);
   line(287,75, 281, 75);

   setcolor(15);
   line(200, 390, 194, 400);
   line(205, 390, 199, 400);
   line(195, 390, 189, 400);


   ellipse(200, 110, 0, 360, 18, 12);
   arc(200, 110, -40, 40, 12);
   arc(200, 110, 140, 220, 12);
   outtextxy(197, 107, "M");

   fillpoly(4, poly);
   setfillstyle(1,2);
   bar3d(120, 130, 280, 190, 0, 1);
   outtextxy(217, 192, "Motorola");
   setfillstyle(1,7);
   fillellipse(140, 240, 18, 15);
   outtextxy(137, 237, "1");
   fillellipse(200, 240, 18, 15);
   outtextxy(197, 237, "2");
   fillellipse(260, 240, 18, 15);
   outtextxy(257, 237, "3");
   fillellipse(140, 280, 15, 18);
   outtextxy(137, 277, "4");
   fillellipse(200, 280, 18, 18);
   outtextxy(197, 277, "5");
   fillellipse(260, 280, 15, 18);
   outtextxy(257, 277, "6");
   fillellipse(140, 320, 18, 15);
   outtextxy(137, 317, "7");
   fillellipse(200, 320, 18, 15);
   outtextxy(197, 317, "8");
   fillellipse(260, 320, 18, 15);
   outtextxy(257, 317, "9");
   fillellipse(140, 360, 14, 15);
   outtextxy(137, 357, "*");
   fillellipse(200, 360, 17, 16);
   outtextxy(197, 357, "0");
   fillellipse(260, 360, 14, 15);
   outtextxy(257, 357, "#");

   outtextxy(350, 20, "Telefone programado em C!!");
   outtextxy(350, 30, "Utilize as teclas 0,1,2,3,");
   outtextxy(350, 40, "4,5,6,7,8,9,0,* e #");
   outtextxy(350, 50, "Para sair, tecle Q");
   outtextxy(350, 60, "E para discar, tecle Enter");

   outtextxy(350, getmaxy()/2,      "Aluno: J£lio C‚sar Medeiros Diniz");
   outtextxy(350, getmaxy()/2 + 10, "MAT.: 20511428    Per¡odo: 2005.2");
   outtextxy(350, getmaxy()/2 + 20, "     T‚cnicas de Programa‡ao     ");
   outtextxy(350, getmaxy()/2 + 30, "   Professor: Eust quio Rangel   ");


   som(x, y);

   return 0;
}


void som(int x, int y)
{
   int randomic, i, j;
   char a = 0;

   sound(395);

   while(1)
   {


	  if(x>272)
	  {
	   x = 125;
	   y += 10;
	  }
	  if(y>180)
	  {
	   x = 125;
	   y = 135;
	   setfillstyle(1,2);
	   bar3d(120, 130, 280, 190, 0, 1);
	  }

	  switch(a = getch())
	  {
		 default:
			nosound();
			delay(200);
			break;
		 case '1':
			outtextxy(x, y, "1");
			setcolor(4);
			outtextxy(137, 237, "1");
			delay(200);
			setcolor(15);
			outtextxy(137,237,"1");
			x += 8;
			//sound(953);
			//delay(200);
			for(i = 0; i < 20; i++)
			{
			   sound(697);
			   delay(5);
			   sound(1209);
			   delay(5);
			}
			nosound();
			break;
		 case '2':
			outtextxy(x, y, "2");
			setcolor(4);
			outtextxy(197, 237, "2");
			delay(200);
			setcolor(15);
			outtextxy(197,237,"2");
			x += 8;
			//sound(1016);
			//delay(200);
			for(i = 0; i < 20; i++)
			{
			   sound(697);
			   delay(5);
			   sound(1336);
			   delay(5);
			}
			nosound();
			break;
		 case '3':
			outtextxy(x, y, "3");
			setcolor(4);
			outtextxy(257, 237, "3");
			delay(200);
			setcolor(15);
			outtextxy(257,237,"3");
			x += 8;
			for(i = 0; i < 20; i++)
			{
			   sound(697);
			   delay(5);
			   sound(1477);
			   delay(5);
			}
			//sound(1087);
			//delay(200);
			nosound();
			break;
		 case '4':
			outtextxy(x, y, "4");
			setcolor(4);
			outtextxy(137, 277, "4");
			delay(200);
			setcolor(15);
			outtextxy(137,277,"4");
			x += 8;
			//sound(989);
			//delay(200);
			for(i = 0; i < 20; i++)
			{
			   sound(770);
			   delay(5);
			   sound(1209);
			   delay(5);
			}
			nosound();
			break;
		 case '5':
			outtextxy(x, y, "5");
			setcolor(4);
			outtextxy(197, 277, "5");
			delay(200);
			setcolor(15);
			outtextxy(197,277,"5");
			x += 8;
			for(i = 0; i < 20; i++)
			{
			   sound(770);
			   delay(5);
			   sound(1336);
			   delay(5);
			}
			//sound(1053);
			//delay(200);
			nosound();
			break;
		 case '6':
			outtextxy(x, y, "6");
			setcolor(4);
			outtextxy(257, 277, "6");
			delay(200);
			setcolor(15);
			outtextxy(257,277,"6");
			x += 8;
			for(i = 0; i < 20; i++)
			{
			   sound(770);
			   delay(5);
			   sound(1477);
			   delay(5);
			}
			//sound(1123);
			//delay(200);
			nosound();
			break;
		 case '7':
			outtextxy(x, y, "7");
			setcolor(4);
			outtextxy(137, 317, "7");
			delay(200);
			setcolor(15);
			outtextxy(137,317,"7");
			x += 8;
			for(i = 0; i < 20; i++)
			{
			   sound(852);
			   delay(5);
			   sound(1209);
			   delay(5);
			}
			//sound(1030);
			//delay(200);
			nosound();
			break;
		 case '8':
			outtextxy(x, y, "8");
			setcolor(4);
			outtextxy(197, 317, "8");
			delay(200);
			setcolor(15);
			outtextxy(197,317,"8");
			x += 8;
			for(i = 0; i < 20; i++)
			{
			   sound(852);
			   delay(5);
			   sound(1336);
			   delay(5);
			}
			//sound(1094);
			//delay(200);
			nosound();
			break;
		 case '9':
			outtextxy(x, y, "9");
			setcolor(4);
			outtextxy(257, 317, "9");
			delay(200);
			setcolor(15);
			outtextxy(257,317,"9");
			x += 8;
			for(i = 0; i < 20; i++)
			{
			   sound(852);
			   delay(5);
			   sound(1477);
			   delay(5);
			}
			//sound(1164);
			//delay(200);
			nosound();
			break;
		 case '0':
			outtextxy(x, y, "0");
			setcolor(4);
			outtextxy(197, 357, "0");
			delay(200);
			setcolor(15);
			outtextxy(197,357,"0");
			x += 8;
			for(i = 0; i < 20; i++)
			{
			   sound(941);
			   delay(5);
			   sound(1336);
			   delay(5);
			}
			//sound(1138);
			//delay(200);
			nosound();
			break;
		 case '*':
			outtextxy(x, y, "*");
			setcolor(4);
			outtextxy(137, 357, "*");
			delay(200);
			setcolor(15);
			outtextxy(137,357,"*");
			x += 8;
			for(i = 0; i < 20; i++)
			{
			   sound(941);
			   delay(5);
			   sound(1209);
			   delay(5);
			}
			//sound(1075);
			//delay(200);
			nosound();
			break;
		 case '#':
			outtextxy(x, y, "#");
			setcolor(4);
			outtextxy(257, 357, "#");
			delay(200);
			setcolor(15);
			outtextxy(257,357,"#");
			x += 8;
			for(i = 0; i < 20; i++)
			{
			   sound(941);
			   delay(5);
			   sound(1477);
			   delay(5);
			}
			//sound(1209);
			//delay(200);
			nosound();
			break;
		 case 13:
			randomic = rand()%10;
			outtextxy(125, y+10, "Chamando!");
			if (randomic <= 3)
			{
			   for(i = 0 ; i < 4 ; i++)
			   {
			      nosound();
			      delay(250);
			      //sound(550);
			      //delay(500);
			      for(j = 0; j < 50; j++)
			      {
				 sound(480);
				 delay(5);
				 sound(620);
				 delay(5);
			      }
			      nosound();
			      delay(250);

			   }
			   outtextxy(125, y+20, "Ocupado!");
			}
			else if(randomic <= 7)
			{
			   for(i = 0 ; i < 3 ; i++)
			   {
			      nosound();
			      delay(1000);
			      for(j = 0 ; j < 200 ; j++)
			      {
				 sound(440);
				 delay(5);
				 sound(480);
				 delay(5);
			      }
			      //sound(460);
			      //delay(2000);
			      nosound();
			      delay(1000);
			   }
			   outtextxy(125, y+20, "Alo, quem fala?");
			}
			else
			{
			   for(i = 0 ; i < 5 ; i++)
			   {
			      nosound();
			      delay(1000);
			      for(j = 0 ; j < 200 ; j++)
			      {
				 sound(440);
				 delay(5);
				 sound(480);
				 delay(5);
			      }
			      //sound(460);
			      //delay(2000);
			      nosound();
			      delay(1000);
			   }
			   for(i = 0 ; i < 4 ; i++)
			   {
			      nosound();
			      delay(250);
			      //sound(550);
			      //delay(500);
			      for(j = 0; j < 50; j++)
			      {
				 sound(480);
				 delay(5);
				 sound(620);
				 delay(5);
			      }
			      nosound();
			      delay(250);

			   }
			   outtextxy(125, y+20, "Ninguem atende.  :(");
			}
			getch();
			x = 125;
			y = 135;
			setfillstyle(1,2);
			bar3d(120, 130, 280, 190, 0, 1);
			break;

		 case 'Q': case 'q':
			nosound();
			closegraph();
			exit(1);
		 }

	   }
     return;
}