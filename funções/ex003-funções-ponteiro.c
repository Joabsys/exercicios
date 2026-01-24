#include <stdio.h>
void ponteiro(float *num)// o * asterisco define que a variavl é um ponteiro
{
	*num=(*num)*(*num);
}
void main()
{
	float numero;
	puts("--- Testando Ponteiros ---");
	puts("Digite um numero positivo");
	scanf("%g",&numero);
	ponteiro(&numero);// o simbolo & indica o endereço da variavel na memoria.
	if(numero<0)
	{
		puts("O ponteiro não funcionou");
	}
	else
	{
		printf("O ponteiro funcionou.seu número ao quadrado é:%g",numero);
	}

}