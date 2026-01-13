#include <stdio.h>

int main()
{
    // switch case operações matematica;
    
    int ch;
    float a,b,c;
    printf("Escolha uma das opções:\n");
    printf("Para somar dois numeros tecle 1\n" );
    printf("Para Multiplicar dois numeros tecle 2\n");
    printf("Para dividir dois numeros tecle 3\n");
    scanf("%d",&ch);
    
    if(ch>0&&ch<=3)
    {
        printf("Digite dois numeros:\n");
        scanf("%f %f",&a,&b);
        while(a<=0||b<=0)
        {
            printf("Os numeros digitados devem ser maior que zero!\n");
            printf("Digite dois numeros:\n");
        scanf("%f %f",&a,&b);
        }
    }
    switch(ch)
    {
        case 1:
        c=a+b;
        printf("A soma dos numeros: %g+%g=%g\n",a,b,c);
        break;
        case 2:
        c=a*b;
        printf("A multiplicação dos numeros: %g*%g=%g\n",a,b,c);
        break;
        case 3:
        c=a/b;
        printf("A divisão dos numeros: %g/%g=%g\n",a,b,c);
        break;
        default:
        printf("Opção escolhida é invalida!");
        break;
    }
   
    return 0;
}