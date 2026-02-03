#include <stdio.h>

int main()
{
	char x=' ';
	char y[]=" ";
	int count=0;
	puts("Digite seu nome");
	do
	{
		scanf("%c",&x);
		y[count]=x;
		count++;
	} while(x!='\n');

	
}