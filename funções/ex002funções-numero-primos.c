#include <stdio.h>

void primo(int a)
{
	if((a%2==0 && a!=2)||(a%3==0 && a!=3)||(a%5==0 && a!=5)||(a%7==0 && a!=7)||a==1)
	{
		printf("o numero %d não é um numero primo",a);
	}
	else
	{
		printf("O numero %d é um numero primo",a);
	}
}
void main()
{
	int z=0;
	puts("--- verificador de numero primo ---");
	puts("Digite um numero");
	scanf("%d",&z);
	primo(z);
}