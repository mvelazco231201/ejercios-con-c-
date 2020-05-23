#include <iostream>
#include <conio.h>
using namespace std;
main ()
{
	int a;
	cout<<"Introduzca un numero entero: ";
	cin>>a;
	if(a==0)
	cout<<"El numero ingresado es cero   ";
	if(a<0)
	cout<<"El numero ingresado es negativo";
	if(a>0)
	cout<<"El numero ingresado es positivo";
	getch();
	
}
