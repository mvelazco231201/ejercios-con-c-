#include<iostream>
#include <conio.h>
#include<string.h>
using namespace std;
main(){
	int n=0;
	char ch;
	do{
		ch=getch();
		cout<<ch;
		n++;
	}while(ch!=13);//El 13 corresponde a en "enter"
	cout<<"Numero de caracteres: "<<n-1;//se le resta uno a n para que no cuente el enter
	getch();
}
