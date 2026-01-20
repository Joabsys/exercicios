#include <stdio.h>
#include<ctype.h>
int main()
{
	int a,b,c=0;
	puts("Digite dois numeros!");
	while(scanf("%d%d",&a,&b)!=isalpha(c))
	{
	    c=b+a;
printf("A soma dos numeros é %d",c);
break;
	}
	if(c==0)
	puts("vc não digitou um numero!");

}