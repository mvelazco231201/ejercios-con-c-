#include <iostream>
#include <conio.h>
using namespace std;

int media(int a, int b, int c);

main()
{
	int a,b,c,res;
	cout<<"Introduzca un numero: ";cin>>a;
	cout<<"Introduzca un numero: ";cin>>b;
	cout<<"Introduzca un numero: ";cin>>c;
	res=media(a,b,c);
	cout<<"La media es: " <<res;
	getch();
}
 int media(int a, int b, int c)
{
	int d;
	d=(a+b+c)/3;
}
