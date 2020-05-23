#include <iostream>
#include <conio.h>
using namespace std;
int suma (int a, int b)
{
	int res;
	res= a+b;
	return res;
}
 main ()
 {
 	int num1,num2,res;
 	cout<<"Numero: ";cin>>num1;
 	cout<<"Numero: ";cin>>num2;
 	res=suma(num1,num2);
 	cout<<"La suma es: "<<res;
 }
 
