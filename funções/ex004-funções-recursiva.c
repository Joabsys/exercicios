#include <stdio.h>

unsigned int recursiva(unsigned int x)
{
	if(x>1)
	{
		return x*recursiva(x-1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	unsigned int y;
	puts("Digite um número para sabermos o seu fatorial");
	scanf("%u",&y);
	recursiva(y);
	printf("O fatorial de %u é %u",y,recursiva(y));

}