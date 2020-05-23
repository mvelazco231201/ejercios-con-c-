// Hacer función que convierta número binario introducido por el usuario a decimal
#include<iostream>
using namespace std;

void conversor(int numBin);

main()
{
	int binario;
	cout<<"Introduce un numero binario: ";cin>>binario;
	//como se puede validar que solo introduzca 1 y 0?
	cout<<"El equivalente en decimal es: ";
	conversor(binario);
}

void conversor(int numBin)
{
	int result=0,base=1,digito;
	
	while(numBin>0)
	{	
		digito=numBin%10;
		numBin=numBin/10;
		result=(digito*base)+result;
		base=base*2;
	}
	cout<<result;
}
