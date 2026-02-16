#include <stdio.h>

int main()
{
    int x,y,z,maior=0;
    printf("digite três numeros\n");
    scanf("%d%d%d",&x,&y,&z);
    // operador ? verifica,neste contexto, 
    //quem é o maior e atribui a variavel maior
    maior= x>z ? x:z && x>y ? x:y;
    printf("Maior numeros é:%d",maior);
}