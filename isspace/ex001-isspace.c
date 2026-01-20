#include <stdio.h>
#include <ctype.h>
int main()
{
	char senha[6]="";
	char nome[30]="";
	int count;

	printf("Digite seu nome\n");
	scanf("%[^\n]",nome);
	getchar();
	printf("digite sua senha\n");
	fgets(senha,sizeof(senha),stdin);
	for (int i = 0; i < 30 ; i++)
	{
		if(nome[i]!= isspace(nome[i]))
		{
			count++;
		}
	}

	for (int j= 0; j < count; j++)
	{

		if(nome[j]!='\n')
		{
			//fprintf(stdout,"%c",nome[i]);

			printf("%c",nome[j]);
		}


	}


}
