
#include <stdio.h>

int main()
{
	char nome[]="Joab Esequiel Silva";
	char nomeAB[14];
	char abrev=' ';
	for(int i=0; i<sizeof(nome); i++)
	{
		if(i<5)
		{
			abrev=nome[i];
			nomeAB[i]=abrev;
		}
		if(i==5)
		{
			abrev=nome[i];
			nomeAB[i]=abrev;
			abrev='.';
			nomeAB[i+1]=abrev;
		}
		if(i==14)
		{
			abrev=' ';
			nomeAB[i-7]=abrev;
			abrev=nome[i];
			nomeAB[i-6]=abrev;
		}
		if(i>=15)
		{
		    abrev=nome[i];
		    nomeAB[i-6]=abrev;
		}
	}
	printf("Nome completo abreviado:%s",nomeAB);
	return 0;

}