#include<iostream>
#include<conio.h>
using namespace std;

struct fecha
{
	short dia,mes,anio;
};
struct dato
{
	char Nombre[50],Dir[50];
	fecha FNac;
	fecha Fechas[3];
};

main()
{
	dato R;
	dato VecR[10];
	
	R.FNac.dia=25;
	R.FNac.mes=10;
	R.FNac.anio=1979;
	
	R.Fechas[0].dia=25;
	R.Fechas[0].mes=10;
	R.Fechas[0].anio=1979;
	R.Fechas[1].dia=30;
	R.Fechas[1].mes=7;
	R.Fechas[1].anio=2001;
	R.Fechas[2].dia=22;
	R.Fechas[2].mes=2;
	R.Fechas[2].anio=2003;
	
	VecR[0].FNac.dia=25;
	VecR[0].Fechas[0].dia=25;
}
