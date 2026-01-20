#include <stdio.h>
#include<ctype.h>
int main()
{
	char x;
	puts("retorna valor do caracter na tabela ASCII:");
	x=getchar();
	
    	printf("O decimal de %c na tabela ASCII é %d\n",x,x); // retorna o valor decimal da tabela ASCII
	    printf("O hexadecimal de %c na tabela ASCII é %x\n",x,x); // retorna o valor hexadecimal da tabela ASCII
	    printf("O octal de %c na tabela ASCII é %o\n",x,x); // retona o valor octal da tabela ASCII
	
}