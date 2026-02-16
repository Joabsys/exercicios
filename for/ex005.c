#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int tempo[2][12][30];
char ano[]="2026";
	for (int i = 1; i <2; i++) {
		for (int j = 1; j <= 12; j++) {
			if(j==2) {
				for (int k = 1; k <= 28; k++) {
					printf("Ano:%s Mês:%d Dia:%d\n",ano,j,k);

				}
			}
			else {
				for (int k = 1; k <= 31; k++) {
					printf("Ano:%s Mês:%d Dia:%d\n",ano,j,k);

				}
			}
		}
	}
}