#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

void goToXY(short x, short y);

main()
{
	char ch;
	short op=1;
	
	do
	{
		system("cls");
		goToXY(40,8);cout<<"Crear matriz";
		goToXY(40,10);cout<<"Diagonales";
		goToXY(40,12);cout<<"Marco";
		goToXY(40,14);cout<<"Vector";
		goToXY(40,16);cout<<"Salir";
		goToXY(36,6+op*2);cout<<"==>";
		ch=getch();
		goToXY(36,6+op*2);cout<<"   ";
		switch(ch)
		{
			case 80:
				if(op<5)
					op++;
				else
					op=1;
				break;
			case 72:
				if(op>1)
					op--;
				else
					op=5;
				break;
			case 13:
				goToXY(0,18);
				switch(op)
				{
					case 1:
						cout<<"Crear matriz presionado";
						break;
					case 2:
						cout<<"Diagonales presionado";
						break;
					case 3:
						cout<<"Marco presionado";
						break;
					case 4:
						cout<<"Vector presionado";
						break;
					case 5:
						exit(0);
				}
				getch();
		}
	}while(op!=6);
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
