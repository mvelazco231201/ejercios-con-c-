#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a, b;
	cout<<"Ingrese un numero entero: ";
	cin>>a;
	cout<<"Ingrese un segundo numero entero: ";
	cin>>b;
	if(a %2==0 && b%2==0)
	cout<<"Los numeros son pares";
	else
	cout<<"Los numeros son impares";
	getch();
}
