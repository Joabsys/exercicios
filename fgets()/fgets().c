#include <stdio.h>
#include<string.h>
void main(void)
{
    char msg[21];
    int valor;
    puts("Digite uma mensagem com no máximo 20 caracteres");
    fgets(msg,sizeof(msg),stdin);//pegar string com espaços em branco
    
    
    printf("nome completo:%s",msg);
    getchar();
}