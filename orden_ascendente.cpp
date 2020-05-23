#include<iostream>
#include<conio.h>
using namespace std;
main() //abc acb bca bac cab cba 
{
	int a, b, c;
	cout<<"Ingrese el primer numero entero: ";
	cin>>a;
	cout<<"Ingrese el segundo numero entero: ";
	cin>>b;
	cout<<"Ingrese el tercer numero entero: ";
	cin>>c;
	if(a<b && b<c)
	cout<<"El orden ascendente es: "<<a<<" "<<b<<" "<<c;
else	if(a<b && b>c)
	cout<<"El orden ascendente es: "<<a<<" "<<c<<" "<<b;
else	if(b<a && a>c)
	cout<<"El orden ascendente es: "<<b<<" "<<c<<" "<<a;
else	if(b<a && a<c)
	cout<<"El orden ascendente es: "<<b<<" "<<a<<" "<<c;
else	if(c<a && a<b)
	cout<<"El orden ascendente es: "<<c<<" "<<a<<" "<<b;
else	if(c<a && a>b)
	cout<<"El orden ascendente es: "<<c<<" "<<b<<" "<<a;
else if (a==b && b<c)
    cout<<"El orden ascendente es: "<<a<<" "<<a<<" "<<c;
else if (a<c && b==c)
    cout<<"El orden ya es ascendente: "<<a<<" "<<c<<" "<<c;
else if (a==b && b==c)
    cout<<"Los numeros son iguales: "<<a<<" "<<b<<" "<<c;
	getch();
	
	}
