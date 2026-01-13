#include <stdio.h>
float add(float);
int main()
{
    float d;
    d=add(3);
    printf("A soma dos numeros é:%g",d);
}
float add(float a)
{
    float b=12;
    b+=a;
    return b;
}