#include <stdio.h>
#include<ctype.h>
#include<conio.h>
void main()
{
	float a,b,c;
    int op;
	puts("selecione uma das opções a seguir");
	printf("1-Para somar dois números.\n2-Para subtrair dois números.\n3-Para dividir dois números.\n4-Para multiplicar dois números.\n5-Para sair.\n");
	op=getch();
	if(op!=5)
	
	{
puts("Digite dois numeros");
	scanf("%g%g",&a,&b);

		switch(op)
		{
		   case 1:
		   {
              c=b+a;
              printf("A soma dos numeros %g+%g=%g \n",a,b,c);
              break;
		   }
		   case 2:
		   {
		       c=a-b;
		       printf("A subtração dos numeros%g-%g=%g\n",a,b,c);
		       break;
		   }
		   case 3:
		   {
		       c=a/b;
		       printf("A divisão dos numeros %g/%g=%g\n",a,b,c);
		       break;
		   }
		   case 4:
		   {
		       c=a*b;
		       printf("A multiplicação dos numeros %g*%g=%g\n",a,b,c);
		       break;
		   }
		   default:
		   {
		       puts("volte quando precisar!;-)\n");
		   }
		   

		}
	}
}