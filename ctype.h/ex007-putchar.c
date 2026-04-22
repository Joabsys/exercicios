#include <stdio.h>
#include<ctype.h>
int main()
{
	char c=' ';
	//char b[10];
	int num=0;
	puts("Digite caracter");
	
	while(num<10)
	{
	  c=getchar(); 
		putchar(toupper(c));//pega os caracteres digitados pelo usuC!rio e mostra na tela em maiusculos(para letras)
		num++;
	}

}