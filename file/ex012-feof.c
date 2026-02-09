#include <stdio.h>
int main()
{
  FILE *arquivo=fopen("leitura.bin","wb");
  FILE *arquivo2=fopen("leitura.txt","w");
  int count=9;
  int i=0;
  for(i=0;i<count;i++)
  {
    fwrite(&i,sizeof(i),1,arquivo);
    printf("%d",i);
  }
fclose(arquivo);
arquivo=fopen("leitura.bin","rb");
while(!feof(arquivo))// o feof verifica o fim do arquivo lido;
  {
fread(&i,sizeof(i),1,arquivo);// arquivo sendo lido;
  fprintf(arquivo2,"%d",i);

  }
   fclose(arquivo);
   fclose(arquivo2);
}
