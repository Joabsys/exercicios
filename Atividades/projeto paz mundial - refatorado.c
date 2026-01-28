#include <stdio.h>

#define COLS 48
#define ROWS 3

/* Lista de índices que imprimem '+' para cada linha */
const int linha0[] = {
    0,1,2,5,9,10,11,14,20,22,24,26,30,34,37,41,45
};

const int linha1[] = {
    0,1,2,4,5,6,10,14,16,18,20,22,24,26,28,30,32,33,34,37,40,41,42,45
};

const int linha2[] = {
    0,3,7,9,10,11,14,17,20,22,23,24,26,30,32,33,34,35,37,39,43,45,46,47
};

int pertence(const int arr[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (arr[i] == valor) return 1;
    }
    return 0;
}

int main(void) {
    for (int r = 0; r < ROWS; r++) {
        for (int i = 0; i < COLS; i++) {
            int printaMais = 0;
            if (r == 0) {
                printaMais = pertence(linha0, sizeof(linha0)/sizeof(int), i);
            }
            else if (r == 1) {
                printaMais = pertence(linha1, sizeof(linha1)/sizeof(int), i);
            }
            else if (r == 2) {
                printaMais = pertence(linha2, sizeof(linha2)/sizeof(int), i);
            }

            if (printaMais) printf("+");//no C puro não tem boleano, então todo valor inteiro é tratado como verdadeiro ou falso
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
