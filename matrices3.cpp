#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
main()
{
	int filas,cols,i,j,num;
	
	cout<<"Filas: ";cin>>filas;
	cout<<"Columnas: ";cin>>cols;
	int mat[filas][cols];
	
	//llenar y mostrar matriz
	srand(time(NULL));
	for(i=0;i<filas;i++)
	{
		for(j=0;j<cols;j++)
			{
				mat[i][j]=rand()%20+10;
				cout<<mat[i][j]<<" ";
			}
		cout<<endl;
	}
	
	do
	{
		cout<<"Numero a buscar: ";cin>>num;
		if(num<10 || num>29)
			cout<<"El numero debe estar entre 10 y 29\n";
	}while(num<10 || num>29);
	
	for(i=0;i<filas;i++)
		for(j=0;j<cols;j++)
			if(mat[i][j]==num)
				cout<<"Encontrado en "<<i<<","<<j<<endl;
	getch();
}
