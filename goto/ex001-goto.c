#include <stdio.h>

int main()
{
	char nome[25],profissao[30];
	int idade=0;

	printf ("digite sua idade\n");
	scanf("%d",&idade);
	
	if(idade<18)
	{
		puts("Menores de idade sem acesso");
		goto saida;// testando goto; se idade menor que 18 não verifica os outros dados.
	}
	else if(idade>18)
	{
getchar();// porque não estava "parando" para pegar o nome
	puts("digite seu nome completo");
	fgets(nome,sizeof(nome),stdin);
	puts ("digite sua profissão");
	scanf("%[^\n]",profissao);
	
		printf("--- dados de acesso --\n Nome:%s Idade:%d\n Profissão:%s",nome,idade,profissao);
	}

	else
	{
saida:
		puts("entrada permitida somente com os pais");
	}
}