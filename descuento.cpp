#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int a, b, c;
	cout<<"Ingrese el monto: ";
	cin>>a;
	if(a>=10000)
	{
	b=a*.15;
	c=a-b;
	cout<<"El monto final es: "<<c;
}
	else if(a<10000)
	{
	b=a*.10;
	c=a-b;
	cout<<"El monto final es: "<<c;
}
	getch();
}
