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
	 cout<<"Hola ni�o";
	else
	 if(Edad>=18 && (Gen== 'M' || Gen=='m'))
	 cout<<"Hola se�or";
	 else
	  if(Edad<18 && (Gen== 'F' || Gen=='f'))
	 cout<<"Hola ni�a";
	 	else
	     if(Edad>=18 && (Gen== 'F' || Gen=='f'))
	      cout<<"Hola se�ora";
	      else
	       cout<<"Datos incorrectos";
	  }


