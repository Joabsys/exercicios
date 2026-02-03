#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
FILE *arquivo=fopen("nomes.bin","wb");
char nome[5];
char c;
puts("Digite o seu nome:");
scanf("%[^\n]",nome);
fwrite(nome,strlen(nome),1,arquivo);
fread(nome,strlen(nome),1,arquivo);
arquivo=fopen("nomes.bin","r");

fseek(arquivo,2,SEEK_SET);
c=fgetc(arquivo);
printf("caracter é:%c\n",c);
fclose(arquivo);

}