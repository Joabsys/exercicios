#include <stdio.h>
#include <string.h>
int main()
{
	
	char nome[30],MDnome[30],LASTnome[30];
	puts("digite seu 1º nome");
	fgets(nome,sizeof(nome),stdin);
	puts("Digite o nome do meio");
	scanf("%[^\n]",MDnome);
	fgetc(stdin);
	puts("Digite seu ultimo nome");
	scanf("%[^\n]",LASTnome);
	strcat(MDnome,LASTnome);//concatenando dois string
	printf("Nome completo é:%s",MDnome);
}