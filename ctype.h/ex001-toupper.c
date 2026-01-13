#include <stdio.h>
#include <ctype.h>//
#include<stdlib.h>
//FUNÇÕES TOUPPER() faz com que o caracter fique maiusculo do ctype.h
void main()
{
	char letra;
	char letra2;
	printf("Digite uma letra minúscula do alfabeto.\n");
	scanf("%c",&letra);
	if(!isalpha(letra))
	{
	    printf("digito incorreto.Digite uma letra do alfabeto.\n");
		while(!isalpha(letra))

		{
			scanf("%c",&letra);

		}
	}
	letra2=toupper(letra);
	printf("A sua letra minuscula %c foi convertida para %c",letra,letra2);


}