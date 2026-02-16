#include <stdio.h>

int main()
{
    //pre incremento: o valor é alterado antes da impressão da variavel.
    //pos incremento: o valor é alterado após o final d a sentença;
    int valor=1;
    int valor2=3;
    printf("valor1:%i\n",++valor);
    printf("valor2:%d\n",valor2++);
    printf("total:%d\n",valor+valor2);
}