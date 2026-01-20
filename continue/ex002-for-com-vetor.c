

#include <stdio.h>

int main()
{
	char a;
	int numeros[10];
	int count=0;
	puts("Digite 10 numeros positivos inteiros");
	while(numeros[count]!=0&&count<10)
	{

		if(count==3)
		{
			
			puts("Sao muitos numeros.Deseja gerar-los automaticamente?Digite s");
			scanf("%c",&a);
			if(a=='s')
			{
				for (int i = 0; i < 10; i++)
				{
					if(numeros[i]!=0)
					{
						printf("Os numeros digitados foram:%d\n",numeros[i]);
					}
				}

			}
		}

		if(count==10)
		{
			for (int i = 0; i < count; i++)
			{
				printf("Os numeros digitados foram:\n O %dB0 numero digitado foi: %d:",i,numeros[i]);
			}
		}
		scanf("%d",&numeros[count]);
		count++;
		
	}

}
