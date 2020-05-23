#include<iostream>
#include<windows.h>
#include<conio.h>
//#include<stdlib.h>
using namespace std;

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
	char op;
	do
	{
		goToXY(40,8);cout<<"[C]rear";
		goToXY(40,10);cout<<"[D]iagonales";
		goToXY(40,12);cout<<"[M]arco";
		goToXY(40,14);cout<<"[V]ector";
		goToXY(40,16);cout<<"[S]alir";
		op=getch();
		switch(op)
		{
			case 'C':case 'c':
				goToXY(40,18);cout<<"Seleccionaste crear";getch();
				goToXY(40,18);cout<<"                        ";break;
			case 'D':case 'd':
				goToXY(40,18);cout<<"Seleccionaste diagonales";getch();
				goToXY(40,18);cout<<"                        ";break;
			case 'M':case 'm':
				goToXY(40,18);cout<<"Seleccionaste marco";getch();
				goToXY(40,18);cout<<"                        ";break;
			case 'V':case 'v':
				goToXY(40,18);cout<<"Seleccionaste vector";getch();
				goToXY(40,18);cout<<"                        ";break;
		}
	}while(op!='S' && op!='s');
	
}
