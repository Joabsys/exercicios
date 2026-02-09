#include <stdio.h>
#include <stdlib.h>
int main()
{
	int contador=0;
	int espaco=0;
	char caracter=' ';
	char *ponteiro;
	FILE *arquivo=fopen("texto.txt","w");
	//char texto[]="";

	printf("Digite um texto:\n");
	do
	{
		
		caracter=getchar();
	//	ponteiro = (char*)malloc(contador);
	ponteiro[contador]=caracter;
	if(!ponteiro)
	{
	    printf("Memoria insoficiente,verifique!");
	}
		//texto[contador]=caracter;
		contador++;
		if(caracter==' ')
		{
		    espaco++;
		}
	} while(caracter!='\n');
	
	fwrite(ponteiro,sizeof(char)*contador,1,arquivo);
	fclose(arquivo);

}