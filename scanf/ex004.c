#include <stdio.h>

int main()
{
   int cont=0;
   float soma=0, num=0;
   
   printf("Entre com os números a serem somados ou digite ctrl-z para sair\n");
   
   while(scanf("%f",&num))
   {
       cont++;
       if(cont==10)
       {
           printf("\t Subtotal:%f\n",soma+=num);
           cont=0;
       }
       else
       {
       soma+=num;    
       }
       
   }
   printf("\t Total:%.2f",soma);
   return 0;
}