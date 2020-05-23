#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int a, b, i, p=0, im=0;
	cout<<"Ingrese un numero positivo:";
	cin>>a;
	cout<<"Ingrese el segundo numero: ";
	cin>>b;
	for(i=b; i<=a; i=i+b )
	{
		if(i%2==0)
		{
		p++;
	}
		else
		{
		im++;
	}
}
		cout<<"Numeros pares "<<p<<"\n";
		cout<<"Numeros impares "<<im<<"\n";
	
	getch();
}
