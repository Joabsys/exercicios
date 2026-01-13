
#include <stdio.h>
#include <ctype.h>

//FUNÇÕES isalnum() verifica se é alpha numérico(letras e ou numeros) do ctype.h
void main()
{
	char num;
	
	printf("Digite um numero valido.\n");
	scanf("%c",&num);
	if(!isalnum(num))
	{
	    printf("Número invaldo.Digite um número válido!.\n");
		while(!isalnum(num))

		{
			scanf("%c",&num);

		}
	}
	
	printf("O alpha numérico %c foi validado com sucesso!",num);


}