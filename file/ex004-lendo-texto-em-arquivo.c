#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv)
{
FIle *fp;
char ch;
if(argc!=2)
{
puts("SIntaxe:imp_txt nome_arq_ACSII");
exit(1);
}
if((fp=fopen(argv[1],"r"))==NULL)
{
puts("Arquivo não pode ser aberto ou não existe");
exit(1);
}
ch=getc(fp);//lê  o 1° caracter do arquivo indicado;
printf("saida do aquivo %s\n",argv[1]);
while(ch!=EOF)
{
putchar(ch);//mostra o caracter na tela;
ch=getc(fp);
}
fclose(fp);
getchar();
}
