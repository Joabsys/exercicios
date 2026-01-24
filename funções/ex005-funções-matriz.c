#include <stdio.h>
void Fmatriz(int FDmatriz[30][15])
{
	int x=0,y=0,count=0;
	puts("Quantidade de linhas");
	scanf("%d",&x);
	while(x>30)
	{
		puts("Quantidade de linhas deve ser menor ou igual a 30");
		scanf("%d",&x);
	}
	puts("Quantidade de colunas");
	scanf("%d",&y);
	while(y>15)
	{
		puts("Quantidade de colunas deve ser menro ou igual a 15");
		scanf("%d",&y);
	}
	for(int i=0; i<x; i++)
	{
		for(int j=0; j<y; j++)
		{
			FDmatriz[i][j]=count;
			count++;
			printf("O elemento [%d][%d] é:%d\n",i,j,FDmatriz[i][j]);
		}
	}
}
void main()
{
	int matriz[30][15];
	puts("---Digite o numero de linhas e colunas da sua matriz,respectivamente---\n");
	Fmatriz(matriz);
}