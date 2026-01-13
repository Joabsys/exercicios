#include <stdio.h>

int main()
{
    struct data
    {
        int dia,mes,ano;
    }hoje={.dia=8, .mes=1, .ano=2026};
    struct data amanha;
    amanha.dia=hoje.dia+1;
    amanha.mes=hoje.mes=1;
    amanha.ano=hoje.ano=2026;
    printf("Data de hoje: 0%d/%d/%d \n",hoje.dia,hoje.mes,hoje.ano);
    printf("Data de amanhã: 0%d/%d/%d \n",amanha.dia,amanha.mes,amanha.ano);
    return 0;