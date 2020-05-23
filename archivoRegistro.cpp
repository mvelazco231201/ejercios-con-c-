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

main()
{
	FILE *arch=NULL;
	alumno reg;
	
	//arch=fopen("alumnos.txt","wb");
	//arch=fopen("alumnos.txt","rb");
	//arch=fopen("alumnos.txt","ab");
	arch=fopen("alumnos.txt","r+b");
	if(arch==NULL)
	{
		cout<<"Error al abrir el archivo";getch();return 0;
	}
	
	/*cout<<"No. de cuenta: ";cin>>reg.cta;
	cout<<"Nombre: ";fflush(stdin);gets(reg.nom);
	cout<<"Materia: ";fflush(stdin);gets(reg.mat);
	cout<<"Semestre: ";cin>>reg.sem;
	cout<<"Grupo: ";reg.gpo=getch();cout<<reg.gpo<<endl;
	cout<<"Calificacion: ";cin>>reg.calif;
	
	fwrite(&reg,sizeof(struct alumno),1,arch);*/
	
	rewind(arch);
	fseek(arch,sizeof(struct alumno),SEEK_SET);
	
	fread(&reg,sizeof(struct alumno),1,arch);
	
	cout<<"No. de cuenta: "<<reg.cta<<endl;
	cout<<"Nombre: "<<reg.nom<<endl;
	cout<<"Materia: "<<reg.mat<<endl;
	cout<<"Semestre: "<<reg.sem<<endl;
	cout<<"Grupo: "<<reg.gpo<<endl;
	cout<<"Calificacion: "<<reg.calif<<endl;

	fclose(arch);
	getch();
}
