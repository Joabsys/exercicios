#include <stdio.h>
#include <stdlib.h>

int main()
{
    //cria os ponteiros dos arquivos
    FILE *nomes=fopen("nomes.txt","r");
    FILE *saudar=fopen("saudar.txt""w");
    //conferir se esta tudo certo com os arquivos

   if(!nomes||!saudar)
   {
     fprintf(stderr,"Erro ao abrir o arquivo\n");
     return EXIT_FAILURE;
   }
   //saudações
   char nome[20];
   // agora é só ler os arquivos
   while(fscanf(nomes,%s\n,nome)>0)
  {

  }
}