#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int vi, vf, in, i;
	cout<<"Valor inicial: ";
	cin>>vi;
	cout<<"Valor final: ";
	cin>>vf;
	cout<<"Intervalo: ";
	cin>>in;
	for(i=vi; i<=vf; i= i+in)
	cout<<i<<" ";
	getch();
}
