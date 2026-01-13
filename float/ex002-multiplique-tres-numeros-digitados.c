#include <stdio.h>

int main()
{// digitar 10 numeros e multiplicar todos eles, se 
//numero digitado menor que zero para o script;
    int p;
   float num,multiplicar=1;
    for (int i = 1; i <= 3; i++) {
        printf("Digite o seu %d° numero:\n",i);
        scanf("%f",&num);
        
        if(num < 0){
            break;
        }
        multiplicar*=num;
    }
    printf("%g",multiplicar);
    return 0;
}