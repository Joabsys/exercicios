#include <stdio.h>

enum day
{
	domingo,segunda,terca,quarta,quita,sexta,sabado

};
void main()
{
	enum day valor;
	
	printf("qual dia preferido da semana?\n");
	scanf("%d",&valor);
	switch(domingo)
	{
	case 0:
		printf("Domingo é bom também!");
		break;
	}
}
