#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a;
	cout<<"ingrese un numero entero: ";
	cin>>a;
	
	if(a==0)
	cout<<"El valor ingresado es cero";
	if(a%2==0)
	cout<<"Es un numero par";
	else
	cout<<"Es numero impar";
	
	getch();
}
