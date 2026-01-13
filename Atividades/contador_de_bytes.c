#include <stdio.h>

int main()
{
    //Podemos verificar se o ambiente que estamos usando segue o padrão C usando a função sizeof. Essa
//função retorna a quantidade de bytes que são 8 bits.
  float km;
  double cm;
  long double mm;
  printf("float=%lu double=%lu long double=%lu",sizeof(float),sizeof(double),sizeof(long double));
  return 0;
}