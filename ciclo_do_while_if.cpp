#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	short i,vi,vf,in;
	cout<<"Valor inicial: ";
	cin>>vi;
	cout<<"Valor final: ";
	cin>>vf;

	do
	{
	cout<<"Intervalo: ";
	cin>>in;
	if (in==0)
	{
		cout<<"El intervalo no puede ser cero\n"; getch();
		}	
	}while(in==0);
	
	if(in<0)
	i=vi;
	in=in*-1;
	if(vi<vf)
	{
	do
	{
		cout<<i<<endl;
		i=i+in;
	
	}while(i<=vf);
}
	else
	{
	do
	{
	cout<<i<<endl;
	i=i-in;
	
	}while(i>=vf);
	}
	getch();
}
