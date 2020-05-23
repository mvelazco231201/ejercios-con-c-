                                                                                                                                                                                                                                  #include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int i, h, s, p, st, sumat=0;
	i=1; 
	while(i<=10){
	cout<<"\n\nTrabajador "<<i;
	cout<<"\nIntroduzca la horas por dia: ";cin>>h; 
	cout<<"Introduzca el sueldo por hora: ";cin>>s;
	st=(h*s)*30;
	sumat+=st;
	p=sumat/10;
	i++;
	cout<<"\nSueldo total de trabajador "<<": "<<st;;
}
cout<<"\nSueldo total: "<<sumat;
cout<<"\nPromedio total: "<<p;
getch();
}
