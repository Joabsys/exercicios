#include <stdio.h>

int main()
{
	//matriz armazena um valor em duas dimensões
	int matriz[20][10];
	int count=0;

	for ( int i = 0; i <= 20; i++) {

		for ( int j = 0; j < 10; j++) {
			matriz[i][j]=count;
			count++;
			if(matriz[i][j]!=0)
			{
				printf("%d\n",matriz[i][j]);
			}
		}
	}

}