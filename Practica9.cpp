#include <iostream>
#include<conio.h>
using namespace std;

short Edad;
char Gen;
 main ()
 {
 	cout<<"Genero (M/F): "; 
	Gen=getch();
	cout<<Gen<<endl;
	cout<<"Edad: ";
	cin>>Edad;
	if(Edad<18 && (Gen== 'M' || Gen=='m'))
	 cout<<"Hola niño";
	else
	 if(Edad>=18 && (Gen== 'M' || Gen=='m'))
	 cout<<"Hola señor";
	 else
	  if(Edad<18 && (Gen== 'F' || Gen=='f'))
	 cout<<"Hola niña";
	 	else
	     if(Edad>=18 && (Gen== 'F' || Gen=='f'))
	      cout<<"Hola señora";
	      else
	       cout<<"Datos incorrectos";
	  }


