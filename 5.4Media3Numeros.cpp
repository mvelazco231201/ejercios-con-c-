//Hacer una función que calcule la media de 3 números introducidos por el usuario
#include<iostream>
using namespace std;
//HAY FORMA DE OPTIMIZAR?

void media(float num);

main()
{
	float numero,suma=0;
	for(short i=0;i<3;i++)
	{
		cout<<"Introduzca un numero: ";cin>>numero;
		suma=suma+numero;
		cout<<endl;
	}
	media(suma);
}

void media(float num)
{
	float prom=0;
	prom=num/3;
	cout<<"La media de los 3 numeros es "<<prom;
}
