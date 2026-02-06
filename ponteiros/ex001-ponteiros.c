#include <stdio.h>
void contador (int valor_inicial, int valor_final)
{
	int i=0;
	int *count;//ponteiro criado
	count=&i;//iniciando o ponteiro e recebendo o endereço de memoria de i
	printf("Valor inicial:%d\tvalor final:%d\n",valor_inicial, valor_final);
	// com o operador * atribuimos o valor para count que altera o valor de i atraves do endereço de memoria
	for (*count = valor_inicial; *count <= valor_final; i++)
	{
		printf("%d",i);
	}
}
int main()
{
	int inicial, final;
	puts("Digite dois numeros:");
	scanf("%d\n%d",&inicial,&final);
	contador(inicial,final);
}