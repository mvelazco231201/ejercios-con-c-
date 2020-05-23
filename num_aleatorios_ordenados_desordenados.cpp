#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
using namespace std;
main ()
{
	int vec[10], i, j, T;
	srand(time (NULL));
	cout<<"Desordenado\n";
	for(i=0;i<10;i++)
	{
		vec[i]=rand()%101;
		cout<<vec[i]<<" ";
	}
	for(i=0;i<9;i++)
	 for(j=i+1;j<10;j++)
	  if(vec[i]>vec[j])
	  {
	  	T=vec[i];
	  	vec[i]=vec[j];
	  	vec[j]=T;
	  }
	  cout<<"\n\nOrdenado\n";
	  for(i=0;i<10;i++)
	   cout<<vec[i]<<" ";
	getch();
}
