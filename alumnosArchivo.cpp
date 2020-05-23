#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

struct alumno
{
	int cta;
	char nom[50],mat[50],gpo;
	short sem;
	float calif;
};

void menu();
void mostrar(int i,alumno reg,FILE *arch);
main()
{
	alumno dato;
	int i,cant,tam;
	char ch;
	FILE *arch=NULL;
	
	arch=fopen("ArchivoAlumnos.txt","r+b");
	if(arch==NULL)
	{
		arch=fopen("ArchivoAlumnos.txt","w+b");
		if(arch==NULL)
			{
				cout<<"Error al abrir el archivo";getch(); return 0;
			}
	}
	
	fseek(arch,0, SEEK_END);
	tam=ftell(arch);
	cant=tam/sizeof(struct alumno);
	rewind(arch);
	
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
					mostrar(i,dato,arch);
				}
				break;
			case 'A':case 'a':
				if(cant>0 && i>0)
				{
					i--;
					mostrar(i,dato,arch);
				}
				break;
			case 'I':case 'i':
				if(cant>0 && i<cant-1)
				{
					i++;
					mostrar(i,dato,arch);
				}
				break;
			case 'U':case 'u':
				if(cant>0)
				{
					i=cant-1;
					mostrar(i,dato,arch);
				}
				break;
			case 'G':case 'g':
				menu();
				cout<<"No. de cuenta: ";cin>>dato.cta;
				cout<<"Nombre: ";fflush(stdin);gets(dato.nom);
				cout<<"Materia: ";fflush(stdin);gets(dato.mat);
				cout<<"Semestre: ";cin>>dato.sem;
				cout<<"Grupo: ";dato.gpo=getch();cout<<dato.gpo<<endl;
				cout<<"Calificacion: ";cin>>dato.calif;
				fseek(arch,0,SEEK_END);
				fwrite(&dato,sizeof(struct alumno),1,arch);
				i=cant;
				mostrar(i,dato,arch);
				cant++;
				break;
			case 'M':case 'm':
				if(cant>0)
					{
						cout<<"Nueva informacion\n";
						cout<<"No. de cuenta: ";cin>>dato.cta;
						cout<<"Nombre: ";fflush(stdin);gets(dato.nom);
						cout<<"Materia: ";fflush(stdin);gets(dato.mat);
						cout<<"Semestre: ";cin>>dato.sem;
						cout<<"Grupo: ";dato.gpo=getch();cout<<dato.gpo<<endl;
						cout<<"Calificacion: ";cin>>dato.calif;
						fseek(arch,i*sizeof(struct alumno),SEEK_SET);
						fwrite(&dato,sizeof(struct alumno),1,arch);
						mostrar(i,dato,arch);
					}
				break;
		}
	}while(ch!='S' && ch!='s');
	fclose(arch);
}

void menu()
{
	system("cls");
	cout<<"[P]rimero [A]nterior S[i]guiente [U]ltimo A[g]regar [M]odificar [S]alir\n\n";
}
void mostrar(int i,alumno reg,FILE *arch)
{
	menu();
	fseek(arch,i*sizeof(struct alumno),SEEK_SET);
	fread(&reg,sizeof(struct alumno),1,arch);
	cout<<"No. de cuenta: "<<reg.cta<<endl;
	cout<<"Nombre: "<<reg.nom<<endl;
	cout<<"Materia: "<<reg.mat<<endl;
	cout<<"Semestre: "<<reg.sem<<endl;
	cout<<"Grupo: "<<reg.gpo<<endl;
	cout<<"Calificacion: "<<reg.calif<<endl;
}
