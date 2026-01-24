//função para verificar seo numero é para ou impar
#include <stdio.h>

int modulo(int x)
{
 int y = x%2;
 return y;
}
int main()
{
int z=0,c=0;
puts("digite um numero para verificar se o resto da divisão é igual a zero");
scanf("%d",&z);
c = modulo(z);
 if(c==0)
  {
printf("O numero %d é par",z);
  }
 else
  {
printf("O numero %d é impar",z);
  } 
}