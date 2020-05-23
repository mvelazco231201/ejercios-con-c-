#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	FILE *arch=NULL;
	char ch,cad[200];
	short i=1;
	float n;
	
	arch=fopen("texto.txt","r");
	
	if(arch==NULL)
		{
			cout<<"Error al abrir el archivo";
			return 0;
		}
	
	fgets(cad,200,arch);
	fgets(cad,200,arch);
	fscanf(arch,"%f",&n);
	cout<<n*2;
		
/*	while(!feof(arch))
	{
		//ch=fgetc(arch);
		fgets(cad,200,arch);
		cout<<i<<"==>"<<cad;
		i++;
	}*/
	fclose(arch);
	getch();
	
}
