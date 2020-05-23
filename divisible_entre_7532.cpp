#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int a;
	cout<<"Ingrese un numero: ";
	cin>>a;
	if(a%7==0)
	cout<<"Es divisible entre 7\n";
	else
	cout<<"No es divisible entre 7\n";
    if(a%5==0)
	cout<<"Es divisible entre 5\n";
	else
	cout<<"No es divisible entre 5\n";
	if(a%3==0)
	cout<<"Es divisible entre 3\n";
	else
	cout<<"No es divisible entre 3\n";
	if(a%2==0)
	cout<<"Es divisible entre 2";
	else
	cout<<"No es divisible entre 2\n";
	getch();
}
