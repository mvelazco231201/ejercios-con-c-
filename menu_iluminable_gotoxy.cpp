#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

void colorTexto(short color );
void goToXY(short x, short y);

main()
{
	char ch;
	short op=1;
	
	do
	{
		//system("cls");
		if(op==1)
			colorTexto(240);
		else
			colorTexto(15);
		goToXY(40,8);cout<<"Crear matriz";
		if(op==2)
			colorTexto(240);
		else
			colorTexto(15);
		goToXY(40,10);cout<<" Diagonales ";
		if(op==3)
			colorTexto(240);
		else
			colorTexto(15);
		goToXY(40,12);cout<<"   Marco    ";
		if(op==4)
			colorTexto(240);
		else
			colorTexto(15);
		goToXY(40,14);cout<<"   Vector   ";
		if(op==5)
			colorTexto(240);
		else
			colorTexto(15);
		goToXY(40,16);cout<<"   Salir    ";
		colorTexto(15);
		
		ch=getch();
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
