#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
using namespace std;
main ()
{
	int i, j, T, a;
	short b;
	short x, y;
	char op;
	srand(time (NULL));
	cout<<"de cuantos quieres tu vector?: ";cin>>a;
	short vec[a];
		for(i=0;i<a;i++)
	{
		cout<<"Dame un limite inferior: ";cin>>y;
	do{
		cout<<"Dame un limite superior: ";cin>>x;	
	}while(x<=y);
	
	for(i=0;i<a;i++){
	vec[i]=rand()%(x-y+1)+y;

	}
	cout<<"Desordenado\n";
	for(i=0;i<a;i++)
	{
		vec[i]=rand()%(x-y+1)+y;
		cout<<vec[i]<<" ";
	}}
	cout<<"\nDesea?\n 1.Orden ascendente\n 2.Orden descendente\n";
	op=getch();
	switch (op)
	{
	case '1':
	for(i=0;i<(a-1);i++)
	 for(j=i+1;j<a;j++)
	  if(vec[i]>vec[j])
	  {
	  	T=vec[i];
	  	vec[i]=vec[j];
	  	vec[j]=T;
	  }
	  cout<<"\n\nOrden ascendente\n";
	  for(i=0;i<a;i++)
	   cout<<vec[i]<<" ";break;
	case '2':
		for(i=0;i<(a-1);i++)
	 for(j=i+1;j<a;j++)
	  if(vec[i]<vec[j])
	  {
	  	T=vec[i];
	  	vec[i]=vec[j];
	  	vec[j]=T;
	  }
	  cout<<"\n\nOrden descendente\n";
	  for(i=0;i<a;i++)
	   cout<<vec[i]<<" ";
}
	getch();
}
