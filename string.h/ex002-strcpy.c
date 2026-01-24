#include <stdio.h>
#include <string.h>
int main()
{
	char nome[30],MDnome[30],LASTnome[30];
	puts("digite seu 1º nome");
	fgets(nome,sizeof(nome),stdin);
	puts("Digite o nome do meio");
	scanf("%[^\n]",MDnome);
	strcpy(MDnome,nome);//copiando uma string para outra string;
	printf("Seu 1º nome é:%s",MDnome);
}