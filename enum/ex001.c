#include <stdio.h>

int main()
{
   enum cores
   {
       azul,verde,laranja
   }cores;
   enum estado_civil
   {
       solteiro,casado,viuvo
   }estCivil;
   
   cores=azul;
   cores=verde;
   cores=laranja;
   
   printf("Cores: %u=azul %u=verde %u=laranja\n",azul,verde,laranja);
   estCivil=solteiro;
   estCivil=casado;
   estCivil=viuvo;
   printf("Estado Civil: %u=solteiro %u=casado %u=viuvo",solteiro,casado,viuvo);
   
   return 0;
}