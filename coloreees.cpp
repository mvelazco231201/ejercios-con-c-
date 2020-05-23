#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
using namespace std;

void colorTexto(short color )
{
	HANDLE hcon;
	
	hcon=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon,color);
}

void goToXY(short x, short y)
{
	HANDLE hcon;
	COORD Pos;
	
	hcon=GetStdHandle(STD_OUTPUT_HANDLE);
	Pos.X=x;
	Pos.Y=y;
	SetConsoleCursorPosition(hcon,Pos);
}

main()
{
	short i,x=0,y=0;
	char a[50];
	
	for(i=0;i<256;i++)
	{
		goToXY(x,y);
		colorTexto(i);
		cout<<"COLOR"<<i;
		if((i+1)%30==0 )
			{
				x=x+10;
				y=0;
			}
		else
			y++;
	}
	getch();
}
