
#include <stdio.h>

int main()
{ 
    float resultado;
    int numero;
    printf("digite um número para dividi-lo por 2 e converte-lo para float\n");
    scanf("%d",&numero);
    resultado = (float)numero/2;// o (float) é o cast convertendo a varivel int em float;
    printf("O numero %d foi convertido para %f",numero,resultado);
   
    return 0;
}