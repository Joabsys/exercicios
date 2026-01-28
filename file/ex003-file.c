#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char string[100];
	int i;
	fp = fopen("string.txt","w");
	if(!fp)
	{
		printf("Erro ao abrir arquivo");
		exit(0);
	}
	printf("Entre com o texto a ser gravado no arquivo\n");
	fgets(string,sizeof(string),stdin);
	for(i=0; i<string[i]; i++)
	{
		putc(string[i],fp);//grava caracter a caracter no arquivo
		
	}
	fclose(fp);
}