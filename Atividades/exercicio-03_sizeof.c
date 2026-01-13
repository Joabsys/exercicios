#include <stdio.h>

int main()
{
    //verificando a quantidade de bytes com sizeof()
    char f[]="joab";
   short int idade=46;
    printf("%s %d anos de idade",f,idade,sizeof(idade));
    return sizeof(f);
}