#include <stdio.h>

int main()
{
	int x=0,y=100;
	for(;x<=y;)// exemplo de for com inicialização das variaveis e incremento fora do for
	{
		printf("x=%dy=%d\n",x,y);
		x++;y--;
	}
}