#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;

main()
{
	FILE *arch;
	char ch,line[200];
	int len;
	
	arch=fopen("grabar.txt","w");
	/*do
	{
		ch=getch();cout<<ch;
		if(ch!=27)
			fputc(ch,arch);
	}while(ch!=27);*/
	do
	{
		gets(line);
		len=strlen(line);
		if(len>0)
		{
			line[len]=13;
			//line[len+1]=10;
			line[len+1]='\0';
			fputs(line,arch);
		}
	}while(line[0]!='\0');
	
	fclose(arch);
}
