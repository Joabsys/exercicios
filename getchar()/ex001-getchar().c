#include <stdio.h>
#include<conio.h>
void main(void)
{
    
	int num;

	printf("Digite um caracter ou tecle espaC'o para sair\n");
	while(num=getchar()!=' ')//Neste exemplo, a linha “getchar();” é utilizada para manter a exibição da tela do DOS até que um 
                            //caracter qualquer seja pressionado. 
	{
		if(num!=10)
		{
			printf("\nCaracter %c Código ASCII %d\n",num,num);
			
		}
	}
	getchar();//aqui também
}