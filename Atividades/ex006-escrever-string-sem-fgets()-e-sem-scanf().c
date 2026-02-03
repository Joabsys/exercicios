#include <stdio.h>

int main()
{
	char x=' ';
	char y[]="         ";
	int count=0;
	puts("Digite seu nome");
	do
	{
		x=getchar();
	 y[count]=x;
		count++;
	} while(x!='\n');
printf("%s%d",y,sizeof(y));
	
}