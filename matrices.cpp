#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int mat[3][3],i,j;
	
	//Llenar
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			cout<<"Numero para ["<<i<<","<<j<<"]: ";
			cin>>mat[i][j];
		}
	
	//Mostrar
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
	getch();
}
