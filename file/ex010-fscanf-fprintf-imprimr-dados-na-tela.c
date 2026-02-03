#include <stdio.h>
#include <stdlib.h>
int main()
{
	int idade=0;
	int count=0;
	char nome[20];
	puts("Digite nome e idade");
	while(count<3)
	{
		fscanf(stdin,"%s\t%d",nome,&idade);
		fprintf(stdout,"nome:%s Idade:%d\n",nome,idade);
		count++;
	}
}