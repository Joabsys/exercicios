#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fatorial(int n)
{
	int fat=1;
	int i=n;
	while(i > 0)
	{
		fat*=i;
		i--;
	}

	return fat;
}
int main()
{
	int num=0,total=0;
	printf("Qual fatorial deseja saber:");
	scanf("%d",&num);
	total=fatorial(num);
	printf("O fatorial de %d C): %d",num,total);
}