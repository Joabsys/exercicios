#include <stdio.h>
#include <string.h>
int main()
{
	char email[30],VALemail[30];
	puts("--- confirmação de E-mail ---");
	puts("digite o seu e-mail");
	fgets(email,sizeof(email),stdin);
	puts("Digite o seu E-mail novamente");
	fgets(VALemail,sizeof(VALemail),stdin);

	if(strcmp(email,VALemail)==0)//strcmp retorna zero se as duas string forem iguais.
	{
		printf("email correto");
	}
	else
	{
		printf("E-mail incorreto.");
	}
}