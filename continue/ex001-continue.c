#include <stdio.h>

int main()
{
	int x;
	puts("Digite um numero");
	do {
		scanf("%d",&x);
		if(x<0)
		{
			puts("Digite um numero maior que zero");
			continue;// com o continue neste ponto, o printf abaixo não será executado 
			//pois o script retornará para o inicio do loop
		}
		printf("numero digitado foi %d",x);
	} while(x<0);
	
}