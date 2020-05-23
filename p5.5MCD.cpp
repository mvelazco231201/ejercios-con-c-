//Hacer función que calcule el máximo común divisor de dos números
#include<iostream>
using namespace std;

void MCD(short n, short m);

main()
{
	short num1,num2;
	cout<<"Introduzca dos numeros: ";cin>>num1>>num2;
	cout<<"El maximo comun divisor es ";
	MCD(num1,num2);
}

void MCD(short n, short m)
{
	short i,mcd=1,mayor=1;
	if(n>m)
		mayor=n;
	else
		mayor=m;
	for(i=2;i<mayor;i++)
	{
		while(n%i==0 && m%i==0)
		{
			mcd=mcd*i;
			m=m/2;
			n=n/2;
		}
	}
	cout<<mcd;
}
