#include <stdio.h>
int main()
{
	int matriz[3][3];//matriz com loop for
	for ( int i=0; i<3; i++ )
		for ( int j=0; j<3; j++ )
		{
			printf ("\nElemento[%d][%d] = ", i, j);
			scanf ("%d", &matriz[ i ][ j ]);
		}
	puts("\n\n--- dados digitados ---");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
		{
			printf("O elementos[%d][%d] C) = %d\n",i,j,matriz[i][j]);
		}
	}
}