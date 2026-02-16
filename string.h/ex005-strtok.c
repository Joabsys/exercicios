#include <stdio.h>
#include <string.h>

int main() {
    char nome[] = "Joab Esequiel Silva";
    char nomeAB[30];
//Lembre-se, porém, de que quando a mesma string é analisada com várias chamadas strtok, 
//o primeiro argumento do ponteiro deve ser NULL após a chamada de função inicial.
    char *primeiro = strtok(nome, " ");
    char *meio = strtok(NULL, " ");
    char *ultimo = strtok(NULL, " ");

    sprintf(nomeAB, "%s %c. %s", primeiro, meio[0], ultimo);

    printf("Nome completo abreviado: %s\n", nomeAB);

    return 0;
}