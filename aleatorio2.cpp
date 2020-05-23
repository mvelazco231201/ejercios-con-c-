#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
main()
{
	short i;
	srand(time(NULL));
	for (i=1; i<=10; i++)
	cout<<rand()%101<<endl;
}


