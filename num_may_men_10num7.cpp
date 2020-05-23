#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	short may, men, n, i;
	i=1;
	while(i<=10)
	{
	cout<<"Ingrese el numero "<<i<<": ";
	cin>>n;
	if(i==0)
	{
	may=n;
	men=n;
}
  else {
  	if(n<men)
  	men=n;
  	else
  	if(n>may)
  	may=n;
  }
  i++;
}
cout<<"Menor: "<<men<<"\nMayor: "<<may;
}
   
