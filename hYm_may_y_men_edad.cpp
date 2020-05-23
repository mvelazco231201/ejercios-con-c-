#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int edad, a=0, b=0, c=0, e=0, z=0, o=0;
	char gen, op;
	do{
    system("cls");
	cout<<"Dime la edad: "; cin>>edad;
	cout<<"Dime el genero H o M: ";gen=getch();
	if(gen=='H' || gen=='h')
	{
		a++;
		if (edad<18)
		{
			z++;
		}
		else	
		if (edad >= 18)
		e++;
	}
	else
	{
	
	if(gen=='m' || gen=='M')
	b+=1;
	if (edad <= 18)
	o+=1;
	else	if(edad > 18)
	c++;
	}

	cout<<"Desea continuar?\n 1.[S]i 2.[N]o \n";
  op=getch();
  
  }while(op!='n' && op!='N');
  cout<<"Cantidad de hombres: "<<a;
  cout<<"\nmenores de edad: "<<z;
  cout<<"\nMayores de edad: "<<e;
  cout<<"\nCantidad de mujeres: "<<b;
  cout<<"\nmenores de edad: "<<o;
  cout<<"\nMayores de edad: "<<c;
}
