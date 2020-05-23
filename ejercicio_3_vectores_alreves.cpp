#include <iostream>
#include <conio.h>
using namespace std;
main(){
	int a, i;
	int  vec[a];
	cout<<"de cuantos quieres tu vector?: ";cin>>a;
	for(i=0;i<a;i++)
	{
		cout<<"Vector["<<i<<"]: "; 
		cin>>vec[i];

	} 
	for(i=a-1;i>=0;i--)
	cout<<vec[i]<<" ";
	getch();
}
