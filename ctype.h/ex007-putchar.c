#include <stdio.h>
#include<ctype.h>
int main()
{
	char c;
	char b[10];
	float num;
	puts("Digite caracter");
	while((c=getchar())!= EOF)
	{
	putchar(toupper(c));//pega os caracteres digitados pelo usuário e mostra na tela em maiusculos(para letras)
	}
	
}