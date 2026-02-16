#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=0;
    char array[]="1";
    a=atoi(array);
    printf("valor:%d\n",a+99);
    char farray[]="1.345";
    float b=0.0;
    b=atof(farray);
    printf("valo float:%.3f",b+2);
    
}