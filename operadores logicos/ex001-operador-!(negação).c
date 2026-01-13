#include <stdio.h>

int main()
{
//operador logico negação ! nega o conteudo da expressão dentro do parenteses.
    int a=10;
    for (int i = 0; i < a; i++) 
    {
        if(!(i%2==0))
        {
            printf ("%d\n",i); 
        }
    }

    return 0;
}