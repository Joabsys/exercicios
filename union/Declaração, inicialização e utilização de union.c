#include <stdio.h>

int main()
{
    union valor
    {
         int inteiro;
        float real;
        double big_real;
    }valor;
    valor.inteiro=10;
    
    printf("%d\n",valor.inteiro);
    
    union valor valorf;
    
    valorf.real=1.6;
    printf("%f",valorf.real);
   return 0;
}