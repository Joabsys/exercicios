#include <stdio.h>
#include<ctype.h>
#include<math.h>
int main()
{
	int x;
	puts("Digite um numero para elevá-lo a pontência dele mesmo");
	scanf("%d",&x);
	printf("%d^%d=",x,x);
	x=pow(x,x);
	printf("%d",x);
}