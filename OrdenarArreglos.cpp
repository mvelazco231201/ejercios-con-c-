#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
main()
{
	short len,i,j,T,lSup,lInf;
	char res;
	cout<<"Numero de elementos: ";cin>>len;
	short vec[len];
	cout<<"Limite inferior: ";cin>>lInf;
	do
	{
		cout<<"Limite superior: ";cin>>lSup;
	}while(lSup<=lInf);
	
	srand(time(NULL));
	for(i=0;i<len;i++)
		{
			vec[i]=rand()%(lSup-lInf+1)+lInf;
			cout<<vec[i]<<" ";	
		}
	cout<<"\n\nOrdenar (A ascendente D descendente)\n";
	res=getch();cout<<res<<endl;
	if(res=='A' || res=='a')
	{
		for(i=0;i<len-1;i++)
			for(j=i+1;j<len;j++)
				if(vec[i]>vec[j])
				{
					T=vec[i];
					vec[i]=vec[j];
					vec[j]=T;
				}
	}
	else
	{
		for(i=0;i<len-1;i++)
			for(j=i+1;j<len;j++)
				if(vec[i]<vec[j])
				{
					T=vec[i];
					vec[i]=vec[j];
					vec[j]=T;
				}
	}
	for(i=0;i<len;i++)
		cout<<vec[i]<<" ";	
}
