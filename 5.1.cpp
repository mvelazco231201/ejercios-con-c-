//Pedir al usuario un entero y devolver el mismo numero en binario
#include<iostream>
#include<string.h>
using namespace std;

void intToBin(short num,char bin[25]);

main()
{
	short entero;
	char binario[25];
	cout<<"Introduzca un numero entero: ";cin>>entero;
	intToBin(entero,binario);
	cout<<binario;
}

void intToBin(short num,char bin[25])
{
	short i=0,j=0,vec[24];
	
	do
	{
		vec[i]=num%2;
		num=num/2;
		i++;
	}while(num>0);
	
	for(j=0;j<i;j++)
		bin[j]=vec[j]+48;
	bin[i]='\0';	
	strrev(bin);
}
