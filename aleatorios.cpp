#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
main()
{
	short i;
	srand(39);
	for (i=1; i<=10; i++)
	cout<<rand()<<endl;
	do{
		cout<<"FechaHora: "<<time(NULL)<<endl;
	
	}	while(getch()!=27);
}
