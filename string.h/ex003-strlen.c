#include <stdio.h>
#include <string.h>
int main()
{
	char nome[30];
	int count=0;
	puts("--- bem vindo ao contador de caracteres de string ---");
	puts("Digite a sua string para contarmos:");
	fgets(nome,sizeof(nome),stdin);
	for (int i = 0; i < strlen(nome); i++) {//strlen retorna o tamanho da string em (int)
	    count++;
	}
	//outra forma de ler o tamanho seria count=strlen(nome);
	printf("Sua string tem %d caracteres",count-1);
	
}