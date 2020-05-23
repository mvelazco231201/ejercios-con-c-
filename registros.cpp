#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
using namespace std;
struct TipoNuevo
{
	char Nom[50];
	char Dir[50];
	char Gen;
	short Edad;
	char Tel[20];
};

void colorTexto(short color );
void Espacios(short e,short color);

main()
{
	TipoNuevo R[3];
	int i;
	
	for(i=0;i<3;i++)
	{
		system("cls");
		cout<<"Nombre: ";Espacios(50,240);gets(R[i].Nom);colorTexto(15);
		cout<<"Direccion: ";fflush(stdin);gets(R[i].Dir);
		cout<<"Genero (H/M): ";fflush(stdin);R[i].Gen=getch();cout<<R[i].Gen<<endl;
		cout<<"Edad: ";cin>>R[i].Edad;
		cout<<"Telefono: ";fflush(stdin);gets(R[i].Tel);	
	}
	
	colorTexto(10);
	for(i=0;i<3;i++)
	{
		cout<<"Nombre: "<<R[i].Nom<<endl;
		cout<<"Direccion: "<<R[i].Dir<<endl;
		cout<<"Genero: "<<R[i].Gen<<endl;
		cout<<"Edad: "<<R[i].Edad<<endl;
		cout<<"Telefono: "<<R[i].Tel<<endl;
	}
	getch();
}

void colorTexto(short color)
{
	HANDLE hcon;
	
	hcon=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon,color);
}

void Espacios(short espacios,short color)
{
	short i;
	char ch=8;
	colorTexto(color);
	for(i=0;i<espacios;i++)
		cout<<" ";
	for(i=0;i<espacios;i++)
		cout<<ch;
}
