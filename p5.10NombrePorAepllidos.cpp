//Hacer un programa que pida un nombre, primer apellido y segundo apellido en tres cadenas diferentes y unirlas para mostrar nombre por apellidos
#include<iostream>
#include<string.h>
using namespace std;

char nom[30],ap1[90],ap2[30];

main()
{
	cout<<"Introduzca su primer nombre: ";cin.getline(nom,30,'\n');
	cout<<"\nIntroduzca su primer apellido: ";cin.getline(ap1,30,'\n');
	cout<<"\nIntroduzca su segundo apellido: ";cin.getline(ap2,30,'\n');
	strcat(ap1,ap2);
	strcat(ap1,nom);
	cout<<ap1;//COMO MOSTRAR ESPACIOS ENTRE PALABRAS?
}
