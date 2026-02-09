#include <stdio.h>
int main()
{
	FILE *arquivo=fopen("leitura.bin","wb");
	FILE *arquivo2=fopen("leitura.txt","w");
	int count=1000;
	int i;
	for(i=0; i<count; i++)
	{
		fwrite(&i,sizeof(int),1,arquivo);
		printf("%d",i);
	}

	fclose(arquivo);
	arquivo=fopen("leitura.bin","rb");


	for(; count>0;) 
	{
		fread(&i,sizeof(int),1,arquivo);// arquivo sendo lido;
		
		if(i%5==0&&i>0)
		{
			fprintf(arquivo2,"%d\n",i);
		}
		else
		{
			fprintf(arquivo2,"%d ",i);
		}
		count--;
	}
	fclose(arquivo);
	fclose(arquivo2);
}
