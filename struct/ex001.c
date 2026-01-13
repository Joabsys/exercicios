#include <stdio.h>

int main()
{
    struct data
    {
    int dia,ano,mes;    
    }
    hoje;
    hoje.dia=8;
    hoje.mes=1;
    hoje.ano=2026;
   printf("0%d/0%d/%d",hoje.dia,hoje.mes,hoje.ano);
    return 0;
}