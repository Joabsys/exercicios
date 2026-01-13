#include <stdio.h>
//operador logico && and verifica se os dois lados da expressão são verdadeiro
int main()
{
    int a=30;
    for (int i = 0; i < a; i++) 
    {
        if(i<a&&i>20&&i%2==0)
        {
            printf ("%d\n",i); 
        }
    }


    return 0;
}