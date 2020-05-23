#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
main()
{
	short i,c=0;
	srand(time(NULL));
do{
	i=rand()%101;
	c++;
	cout<<i<<endl;
}while (i!=100);
cout<<"numeros: "<<c;
}

