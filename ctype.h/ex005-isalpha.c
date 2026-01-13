/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>//
#include<stdlib.h>
//FUNÇÕES isalpha () verifica se o caracter é uma letra do ctype.h
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
	letra2=tolower(letra);
	printf("A sua letra minuscula %c foi convertida para %c",letra,letra2);


}