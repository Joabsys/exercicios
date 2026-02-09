#include <stdio.h>

int main()
{
	int valores[]= {1,8,0,2,4,9,3};
	int valores2[7]= {};
	int indice,auxb,j=0;
	for (int i = 0; i < sizeof(valores)/sizeof(int); i++)
	{
	
		for ( j = i; j < sizeof(valores)/sizeof(int); j++)
		{
			if(valores[j]<=valores[i])
			{
				int auxa=valores[j];
				valores[j]=valores[i];
				valores[i]=auxa;
				valores2[i]=valores[i];
			}
		}
		printf("%d",valores2[i]);
	}
}