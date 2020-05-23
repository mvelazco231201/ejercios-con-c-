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
	short x=40,y=12;
	char ch;
	do
	{
		goToXY(x,y);
		cout<<"R";
		ch=getch();
		goToXY(x,y);
		cout<<" ";
		switch(ch)
		{
			case 72:
				if(y<=0)
					y=29;
				else
					y--;
				break;
			case 80:
				if(y>=29)
					y=0;
				else
					y++;
				break;
			case 75:
				if(x<=0)
					x=90;
				else
					x--;
				break;
			case 77:
				if(x>=90)
					x=0;
				else
					x++;
				break;
		}
	}while(ch!=27);
}
