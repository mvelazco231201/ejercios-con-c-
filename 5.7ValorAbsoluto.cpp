//Hacer una funci�n que regrese el valor absoluto de un n�mero
#include<iostream>
using namespace std;

float valorAbs(float valor);

main()
{
	float num;
	cout<<"Introduzca un numero: ";cin>>num;
	cout<<"Su valor absoluto es "<<valorAbs(num);
}

float valorAbs(float valor)
{
	if(valor<0)
		valor=valor*-1;
	return valor;
}
