#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	short may=0, men=0, n,b=0;
	char op;
	do{
	system("cls");
	cout<<"Ingrese el numero ";
	cin>>n;
	if(b==0)
	{
		b=1;
		men=n;may=n;
	}
	if(n<men)
  	men=n;
  	else
  	if(n>may)
  	may=n;
  	
  cout<<"Desea seguir agregando numeros?\n 1.[S]i 2.[N]o \n";
  op=getch();
  
  }while(op!='n' && op!='N');
cout<<"\nMenor: "<<men<<"\nMayor: "<<may;
getch();
}
   
