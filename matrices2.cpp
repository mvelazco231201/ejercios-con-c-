#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
main()
{
	int filas,cols,i,j;
	cout<<"Filas: ";cin>>filas;
	cout<<"Columnas: ";cin>>cols;
	int mat[filas][cols];
	
	//llenar
	for(i=0;i<filas;i++)
		for(j=0;j<cols;j++)
			{
				cout<<"Numero ["<<i<<","<<j<<"]: ";cin>>mat[i][j];
			}
	
	//mostrar
	system("cls");
	for(i=0;i<filas;i++)
	{
		for(j=0;j<cols;j++)
				cout<<mat[i][j]<<" ";
		cout<<endl;
	}
	getch();
}
