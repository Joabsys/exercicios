#include <stdio.h>
#include <stdlib.h>
int main()
{
	const char *arq_nome= "arquivo.bin";
	int idade=0;
	int count=0;
	char nome[20];
	FILE *arquivo = fopen(arq_nome,"wb");
	if(!arquivo)
	{
		printf("Não foi possivel abrir o arquivo");
		exit(0);
	}
	puts("Digite nome e idade");
	while(count<3)
	{
		fscanf(stdin,"%s\t%d",nome,&idade);
		fprintf(arquivo,"nome:%s Idade:%d\n",nome,idade);
		count++;
	}
}