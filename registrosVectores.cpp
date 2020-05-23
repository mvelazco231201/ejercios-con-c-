#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct fecha
{
	short dia,mes,anio;
};
struct reg
{
	char nom[50];
	fecha fechas[4];
};
void menu();
void mostrar(short ra,reg v[5]);
main()
{
	reg datos[5];
	short i,cant=0;
	char ch;
	
	menu();
	do
	{
		ch=getch();
		switch(ch)
		{
			case 'P':case 'p':
				if(cant>0)
				{
					i=0;
					mostrar(i,datos);
				}
				break;
			case 'A':case 'a':
				if(cant>0 && i>0)
				{
					i--;
					mostrar(i,datos);
				}
				break;
			case 'I':case 'i':
				if(cant>0 && i<cant-1)
				{
					i++;
					mostrar(i,datos);
				}
				break;
			case 'U':case 'u':
				if(cant>0)
				{
					i=cant-1;
					mostrar(i,datos);
				}
				break;
			case 'G':case 'g':
				if(cant>=5)
					{
						cout<<"Ya no hay espacio para agregar";getch();break;
					}
				menu();
				cout<<"Nombre: ";fflush(stdin);gets(datos[cant].nom);
				cout<<"Fecha nacimiento:\nDia: ";cin>>datos[cant].fechas[0].dia;
				cout<<"Mes: ";cin>>datos[cant].fechas[0].mes;
				cout<<"Año: ";cin>>datos[cant].fechas[0].anio;
				cout<<"Fecha bautizo:\nDia: ";cin>>datos[cant].fechas[1].dia;
				cout<<"Mes: ";cin>>datos[cant].fechas[1].mes;
				cout<<"Año: ";cin>>datos[cant].fechas[1].anio;
				cout<<"Fecha primera comunion:\nDia: ";cin>>datos[cant].fechas[2].dia;
				cout<<"Mes: ";cin>>datos[cant].fechas[2].mes;
				cout<<"Año: ";cin>>datos[cant].fechas[2].anio;
				cout<<"Fecha confirmacion:\nDia: ";cin>>datos[cant].fechas[3].dia;
				cout<<"Mes: ";cin>>datos[cant].fechas[3].mes;
				cout<<"Año: ";cin>>datos[cant].fechas[3].anio;
				mostrar(cant,datos);
				i=cant;
				cant++;
				break;
			case 'M':case 'm':
				if(cant>0)
					{
						cout<<"Nueva informacion\n";
						cout<<"Nombre: ";fflush(stdin);gets(datos[i].nom);
						cout<<"Fecha nacimiento:\nDia: ";cin>>datos[i].fechas[0].dia;
						cout<<"Mes: ";cin>>datos[i].fechas[0].mes;
						cout<<"Año: ";cin>>datos[i].fechas[0].anio;
						cout<<"Fecha bautizo:\nDia: ";cin>>datos[i].fechas[1].dia;
						cout<<"Mes: ";cin>>datos[i].fechas[1].mes;
						cout<<"Año: ";cin>>datos[i].fechas[1].anio;
						cout<<"Fecha primera comunion:\nDia: ";cin>>datos[i].fechas[2].dia;
						cout<<"Mes: ";cin>>datos[i].fechas[2].mes;
						cout<<"Año: ";cin>>datos[i].fechas[2].anio;
						cout<<"Fecha confirmacion:\nDia: ";cin>>datos[i].fechas[3].dia;
						cout<<"Mes: ";cin>>datos[i].fechas[3].mes;
						cout<<"Año: ";cin>>datos[i].fechas[3].anio;
						mostrar(i,datos);
					}
				break;
		}
	}while(ch!='S' && ch!='s');
}
void menu()
{
	system("cls");
	cout<<"[P]rimero [A]nterior S[i]guiente [U]ltimo A[g]regar [M]odificar [S]alir\n\n";
}
void mostrar(short ra, reg v[5])
{
	menu();
	cout<<"Nombre: "<<v[ra].nom<<endl;
	cout<<"Fecha nacimiento: "<<v[ra].fechas[0].dia<<"/"<<v[ra].fechas[0].mes<<"/"<<v[ra].fechas[0].anio<<endl;
	cout<<"Fecha bautizo: "<<v[ra].fechas[1].dia<<"/"<<v[ra].fechas[1].mes<<"/"<<v[ra].fechas[1].anio<<endl;
	cout<<"Fecha primer caomunion: "<<v[ra].fechas[2].dia<<"/"<<v[ra].fechas[2].mes<<"/"<<v[ra].fechas[2].anio<<endl;
	cout<<"Fecha confirmacion: "<<v[ra].fechas[3].dia<<"/"<<v[ra].fechas[3].mes<<"/"<<v[ra].fechas[3].anio<<endl;
}
