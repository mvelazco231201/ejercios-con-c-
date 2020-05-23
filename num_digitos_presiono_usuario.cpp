#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int d, a;
	char op,n;
	do{
	system("cls");
	cout<<"Presione una tecla: "; n=getch();cout<<n;
	if (n>='0' && n<='9')
	d++;
  cout<<"\nDesea continuar?\n 1.[S]i 2.[N]o \n";
  op=getch();
  
  }while(op!='n' && op!='N');
cout<<"Cantidad de numeros ingresados: "<<d;
getch();
}
