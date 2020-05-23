#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

main()
{
	char cad[200],sub[150];
	short i,j,igual=0,vbusc[150];
	
	cout<<"Introduzca una frase: ";gets(cad);
	cout<<"Introduzca otra frase: ";gets(sub);
	
	for(i=0;i<strlen(cad);i++)
		if(cad[i]==sub[0])
			for(j=0;j<strlen(sub);j++)
			{
				if(cad[i+j]!=sub[j])			
					break;
				vbusc[igual]=j;
				igual++;
			}
	cout<<"Coincidencias encontradas: "<<igual<<endl;
	cout<<"Encontradas en la posicion ";
	for(i=0;i<igual;i++)
		cout<<vbusc[i]<<" ";
}
