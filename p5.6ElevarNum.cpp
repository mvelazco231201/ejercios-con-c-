//Hacer una función que calcule x^[n] sin la librería math.h
#include<iostream>
using namespace std;

float elevarNum(float entero, short pow);

main()
{
	float num;
	short elevar;
	cout<<"Introduzca un numero: ";cin>>num;
	cout<<"\nIntroduzca la potencia a la que desea elevar: ";cin>>elevar;
	cout<<"\nEl resultado es ";
	cout<<elevarNum(num,elevar);
}

float elevarNum(float entero, short pow)
{
	short i;
	float result=1;
	
	if(entero==0)
		result=1;
		
	if(entero>0 && pow%2==0)
		entero=entero*-1;	
	
	if(pow>0)
		for(i=1;i<=pow;i++)
			result=result*entero;
	
	if(pow<0)
	{
		pow=pow*-1;
		for(i=1;i<=pow;i++)
			result=result/entero;
	}
		
	return result;
}
