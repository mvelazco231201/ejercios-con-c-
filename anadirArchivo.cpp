#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;

main()
{
	FILE *arch=NULL;
	char cad[300];
	short len;
	
	//arch=fopen("agregar.txt","a");
	arch=fopen("agregar.txt","r+");
	if(arch==NULL)
	{
		cout<<"Error al abrir el archivo";getch(); return 0;
	}
	
	do
	{
		gets(cad);
		len=strlen(cad);
		cad[len]='\n';
		cad[len+1]='\0';
		fputs(cad,arch);
	}while(len>0);
	fclose(arch);
}
