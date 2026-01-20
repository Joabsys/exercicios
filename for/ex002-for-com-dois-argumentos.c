#include <stdio.h>

int main()
{
	int x=0,y=100;
	for(x=0,y=100; x<=y; x++,y--)
	{
		printf("x=%dy=%d\n",x,y);
	}
}