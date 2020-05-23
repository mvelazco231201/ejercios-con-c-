#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
struct pieza
{
	short x,y;
};

short tam;

void posicionInicial(short x,short y,pieza gus[15]);
void gotoXY(short x, short y,pieza gus[15]);
void pintaGusano(pieza gus[15]);
void moverGusano(short x,short y,pieza gus[15]);
void colorTexto(short color);
pieza ponerComida();
void comerComida(pieza *com,short x, short y);

main()
{
	pieza gusano[15],comida;
	char ch;
	short x=40,y=15;
	
	tam=10;
	srand(time(NULL));
	posicionInicial(40,15,gusano);
	comida=ponerComida();
	
	do
	{
		pintaGusano(gusano);
		ch=getch();
		switch(ch)
		{
			case 72:
				if(y<=0)
					y=29;
				else
					y--;
				if(x==comida.x && y==comida.y)
				{
					tam++;comida=ponerComida();
			  }
				moverGusano(x,y,gusano);
				break;
			case 80:
				if(y>=29)
					y=0;
				else
					y++;
				if(x==comida.x && y==comida.y)
				{
					tam++;comida=ponerComida();
			  }
				moverGusano(x,y,gusano);
				break;
			case 75:
				if(x<=0)
					x=90;
				else
					x--;
				if(x==comida.x && y==comida.y)
				{
					tam++;comida=ponerComida();
			  }
				moverGusano(x,y,gusano);
				break;
			case 77:
				if(x>=90)
					x=0;
				else
					x++;
				if(x==comida.x && y==comida.y)
				{
					tam++;comida=ponerComida();
			  }
				moverGusano(x,y,gusano);
				break;
		}
		
	}while(ch!=27);
}

void posicionInicial(short x,short y,pieza gus[15])
{
	short i;
	for(i=0;i<tam;i++)
	{
		gus[i].x=x-i;gus[i].y=y;
	}
}

void gotoXY(short x, short y)
{
	HANDLE hcon;
	COORD Pos;
	
	hcon=GetStdHandle(STD_OUTPUT_HANDLE);
	Pos.X=x;
	Pos.Y=y;
	SetConsoleCursorPosition(hcon,Pos);
}

void pintaGusano(pieza gus[15])
{
	short i;
	colorTexto(10);
	for(i=tam-1;i>=0;i--)
	{
		gotoXY(gus[i].x,gus[i].y);cout<<"*";
	}
	colorTexto(15);
}

void moverGusano(short x,short y,pieza gus[15])
{
	short i;
	gotoXY(gus[tam-1].x,gus[tam-1].y);cout<<" ";
	for(i=tam-1;i>0;i--)
		{
			gus[i].x=gus[i-1].x;
			gus[i].y=gus[i-1].y;
		}
	gus[0].x=x;
	gus[0].y=y;
}

void colorTexto(short color)
{
	HANDLE hcon;
	
	hcon=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon,color);
}

pieza ponerComida()
{
	pieza c;
	c.x=rand()%80;
	c.y=rand()%30;
	gotoXY(c.x,c.y);cout<<"*";
	return c;
}

/*void comerComida(pieza *com,short x, short y)
{
	if(x==*com->x && y==*com->y)
	{
		tam++;*com=ponerComida();
  }
}*/
