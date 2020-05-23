#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

short Edad;
string a;
main()
{
	cout<<"Dime tu edad: ";
	cin>> Edad;
	if (Edad >= 18)
	{
		cout<<"Bienvenido, eres mayor de edad, cual es tu nombre? ";
		cin>> a;
		cout<<"Hola    " <<a; 
	}
	else
    {
	    
    	cout<<"Tu no eres mayor de edad -.- ";
    	cout<<"Regresa en  " <<18-Edad<< "años" ;
	}
}

