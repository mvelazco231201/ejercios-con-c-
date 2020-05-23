#include <iostream>
using namespace std;
void divent(int x, int y);
int main()
{
	int n1, n2;
	cout<<"Ingrese el primer valor: "<<endl;
	cout<<"Ingrese el segundo valor: "<<endl;	
	cin>>n1>>n2;
	divent(n1, n2);
}
void divent(int x, int y){
	int i=0, s, temp;
	s=y;
	temp=x;
	while(x>=y){
		x-=y;
		i++;
	}
	cout<<"Tu resultado es : "<<i<<endl;
	cout<<"Tu residuo es: "<<x;
	
}
