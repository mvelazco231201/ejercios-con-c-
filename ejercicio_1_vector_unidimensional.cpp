#include <iostream>
#include <conio.h>
using namespace std;
main(){
	short vec[10], i;
	for(i=0;i<10;i++)
	{
		cout<<"Vector["<<i<<"]: "; //para el numero de vector y asignarle valor
		cin>>vec[i];

	} 
	for(i=0;i<10;i++)
	cout<<vec[i]<<" "; //Para separar y so se amontonen a a hora de imprimir
	getch();
}
