#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int a, i, p=0, im=0;
		do{
		cout<<"Introduce un numero: "; cin>>a;
		if(a%2==0)
		{
		p++;
	}
		else
		{
	im++;
	}
}while(a>=0);

		cout<<"Numeros pares "<<p<<"\n";
		cout<<"Numeros impares "<<im<<"\n";
getch();
}
