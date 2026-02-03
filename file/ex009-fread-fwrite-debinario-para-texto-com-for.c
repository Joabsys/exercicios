#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char* a_bin = "amatriz.bin";
    const char* a_txt = "amatriz.txt";
    // cria o arquivo em modo binario
    FILE*  binario = fopen(a_bin,"wb");
    for ( int i = 0; i<9; i+=1 ) fwrite( &i, sizeof(i), 1, binario );
    fclose(binario);

    // abre o arquivo, le os valores e 
    // grava numa linha no arquivo texto
    // separados por virgula e com um '\n'
    // no fim da linha
    binario = fopen( a_bin,"r");
    FILE*   texto = fopen(a_txt,"w");
    int valor = 0;

    // o primeiro valor e diferente porque e para
    // separar por virgula...
    if ( fread( &valor, sizeof(valor), 1, binario ) <= 0 )
    {
        printf("Erro na leitura: arquivo %s vazio?\n", a_bin);
        return -1;
    }
    fprintf( texto, "%d", valor );
   // printf("Valores: %d", valor );

    // trata o resto dos valores
   
    for (; fread(&valor,sizeof(valor),1,binario)>0;) {
    fprintf(texto,",%d",valor);
    }
   
    fclose(binario);
    printf("\n");

    return 0;
}
