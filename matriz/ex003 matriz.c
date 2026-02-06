#include <stdio.h>

int main()
{
	int matrix[50][50];
	int count=0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j <= 50; j++)
		{
		    matrix[i][j]=count;
			printf(	"Linha:%d Coluna:%d Numero:%d\n",i,j,matrix[i][j]);
			count++;
		}
	}
}