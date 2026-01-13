#include <stdio.h>
//operador logico|| OU verifica se um dos lados da expressão é verdadeiro
int main()
{ 
    float b=10;
    for (float i = 0; i < b; i++) {
        if(i>0||b<=10)
        {
         printf("%f \n",i);
         printf("%g \n",i);
        }
    }
   
    return 0;
}