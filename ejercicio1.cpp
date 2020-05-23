#include <iostream>
#include <conio.h>
using namespace std;

int binario(int num)
{
	int i,j,res,vec[100];
	i=0;
	while(num>0)
	{
		vec[i]=num%2;
		num/=2; i++;
}
	for(j=i-1; j>=0; j--){
     res= vec[j];
     return 0;
	}

}
main ()
{
	int num, a;
	cout<<"Introduzca el numero entero a convertir en binario: ";cin>>num;
	a=binario(num);
	cout<<"El numero en binario es: "<<binario;
}
