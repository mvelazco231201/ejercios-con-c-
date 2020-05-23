//Pedir una frase de 300 caracteres máximo y devolver la cantidad de palabras contenidas en la frase
#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;

int contarPalabras(char cad[]);
//COMO PLANTEAR QUE DELIMITADOR para strtok TENGA MÁS DE UNA CONDICION*/

main()
{
	char frase[300];
	short valid=0;
	cout<<"Introduzca una frase menor a 300 caracteres: ";cin.getline(frase,300,'\n');
	
	cout<<"Introdujo "<<contarPalabras(frase)<<" palabras";
}

int contarPalabras(char cad[])
{
	short palabras=0,i;
	for(i=0;i<strlen(cad);i++)
	{
		if(isalpha(cad[i]) && cad[i+1]==32)
			palabras++;//por que toma una palabra menos de lo que hay?;
	}
	if(cad[strlen(cad)-1]!=' ')
		palabras=palabras+1;
	
	return palabras;
};
