#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int a,b,c;
	cout<<"Dame el valor inicial: ";
	cin>>a;
	cout<<"Dame el valor final: ";
	cin>>b;
	cout<<"Dame el tama�o del intervalo: ";
	cin>>c;
	
	while(a<=b)
	{
		cout<<a<<endl;
		a=a+c;
	}
	getch();
}
