#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
main()
{
		short vec[20], i;
	short b,c=0;
	short x, y;
	cout<<"Dame un limite inferior: ";cin>>y;
	do{
		cout<<"Dame un limite superior: ";cin>>x;	
	}while(x<=y);
	
	srand(time(NULL));
	for(i=0;i<20;i++){
	vec[i]=rand()%(x-y+1)+y;
		cout<<vec[i]<<" ";
	}
	getch();
}
