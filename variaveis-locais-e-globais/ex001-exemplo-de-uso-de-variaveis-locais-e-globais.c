#include <stdio.h>
//variaveis globais
int a=1,b=2,c=3;
void locais();
int main()
{
    printf("Essas são variaveis globais a=%d b=%d c=%d\n",a,b,c);
locais();
    
}
void locais()
{
    //variaveis locais
    int o=5,p=6,q=7;
    printf("Essas são variaveis locais o=%d p=%d q=%d",o,p,q);  
}