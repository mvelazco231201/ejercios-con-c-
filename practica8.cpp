#include <iostream>
using namespace std;
void div(int x, int y);
int main()
{
	int num1, num2;
	cout<<"Ingrese el dividendo: "; cin>>num1;
	cout<<"Ingrese el divisor: ";cin>>num2;	
	div(num1, num2);
}
void div(int resto, int divisor)
{
	int cociente=0, a, b;
	a=divisor;
	b=resto;
	while(resto>=divisor){
		resto-=divisor;
		cociente++;
	}
	cout<<"Tu cociente es : "<<cociente<<endl;
	cout<<"Tu residuo es: "<<resto;
	
}
