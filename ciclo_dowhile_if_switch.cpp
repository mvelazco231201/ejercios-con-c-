#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
main()
{
	char op;
	float n1, n2, r, i;
	do{
		system("cls");
		cout<<"[S]uma\n\n [R]esta\n\n [M]ultiplicacion\n\n [D]ivision\n\n [E]xponente\n\n S[a]lir\n\n";
		op=getch();
		switch(op)
		{
		case 's': case 'S':
		cout<<"Numero 1: "; cin>>n1;
		cout<<"Numero 2: "; cin>>n2;
		r=n1+n2;
		cout<<"La suma es: "<<r; getch(); break;
			case 'r': case 'R':
		cout<<"Numero 1: "; cin>>n1;
		cout<<"Numero 2: "; cin>>n2;
		r=n1-n2;
		cout<<"La resta es: "<<r; getch(); break;
			case 'm': case 'M':
		cout<<"Numero 1: "; cin>>n1;
		cout<<"Numero 2: "; cin>>n2;
		r=n1*n2;
		cout<<"La multiplicacion es: "<<r; getch(); break;
			case 'd': case 'D':
		cout<<"Numero 1: "; cin>>n1;
		cout<<"Numero 2: "; cin>>n2;
		r=n1/n2;
		cout<<"La division es: "<<r; getch(); break;
			case 'e': case 'E':
		cout<<"Base: "; cin>>n1;
		cout<<"Exponente: "; cin>>n2;
		if(n2==0)
		r=1;
		else
		if(n2<0)
		{
			n2=n2*-1;
			i=0;r=n1;
			while(i<=2)
			{
				r=r/2;
				i++;
			}
		}
		else
		{
			i=2;r=n1;
			while(i<=n2)
			{
				r=n1*r;
				i++;
			}
		}
		}
		cout<<"Resultado: "<<r; getch(); 
		} while(op!='A' && op!='a');
	
}
