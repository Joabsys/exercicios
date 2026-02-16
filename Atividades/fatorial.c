#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fatorial(int n) {
	int fat=1;
	for (int i=n; i > 0; i--) {
		fat*=i;
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