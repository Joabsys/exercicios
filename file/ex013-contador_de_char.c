/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	int contador=0;
	int espaco=0;
	char caracter=' ';
	
	FILE *arquivo=fopen("texto.txt","w");
	char texto[]="      ";

	printf("Digite um texto:\n");
	do
	{
		caracter=getchar();
		texto[contador]=caracter;
		contador++;
		if(caracter==' ')
		{
		    espaco++;
		}
	} while(caracter!='\n');
	
	fwrite(texto,sizeof(char)*contador,1,arquivo);
	fclose(arquivo);

}