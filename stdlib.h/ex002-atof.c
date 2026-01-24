#include <stdio.h>
#include <stdlib.h>//necessario para usar a função atof
int main()
{
	char letra[10];
	float num;
	puts("Digite uma string de números");
	scanf("%[^\n]",letra);
	fgetc(stdin);
	num = atof(letra);//atof converter uma string de numeros em float. se a string não tem numeros retona zero.
	
	printf("A string numerica foi convertida para float:%g",num);
}