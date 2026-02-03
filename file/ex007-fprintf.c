#include <stdio.h>	

int main(void)
{
    FILE *arquivo = fopen("exemplo.dat", "w");
 
    fprintf(arquivo, "%d é a resposta.\n", 42);
 
    fclose(arquivo);
 
    return 0;
}