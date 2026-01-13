#include <stdio.h>

int main()
{
	int n1,n2;
	printf("Digite 1 para imprimir 5 numeros em sequência\n");
	scanf("%d",&n1);

	for (int i = 1; i <= n1+3; i++)
	{
		if(i==1)
		{
         printf("%d\n",n1); 
		}
		
		printf("%d\n",i+n1);
	}

	return 0;
}