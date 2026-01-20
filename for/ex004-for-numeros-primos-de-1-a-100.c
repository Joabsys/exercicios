#include <stdio.h>

int main()
{
	int x;
	char texto[]="não é número primo.";
	char textoP[]="é número primo.";
	puts("Digite um número positivo");
	scanf("%d",&x);
	for (int i = 0; i <= x; i++)
	{
		
     if((i%2==0&&i!=2)||(i%3==0&&i!=3)||(i%5==0&&i!=5)||(i%7==0&&i!=7)||i==1)
     {
     // printf("%d %s\n",i,texto);
     }
     else
     {
      printf("%d %s\n",i,textoP);    
     }
     
	}
}