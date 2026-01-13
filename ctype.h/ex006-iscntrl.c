
#include <stdio.h>
#include <ctype.h>
//Recebe: um único argumento (caractere) que será convertido para inteiro. Mesmo que iscntrl() receba um inteiro como argumento, o caractere é passado para a função. Internamente, o caractere é convertido em seu valor ASCII para a verificação.
//Retorna: um valor diferente de zero caso seja um caractere de controle (códigos de 0 a 31 na tabela ASCII) ou 0 caso contrário. 

void main()
{
	char c;
	int resultado;
	c='\n';
	resultado=iscntrl(c);
	printf("%d\n",resultado);
	c='2';
	resultado=iscntrl(c);
	printf("%d\n",resultado);
}
