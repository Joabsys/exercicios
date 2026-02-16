#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a=123;
	char array[4];
	float b=3.567;
	char farray[5];
	itoa(a,array,3);
	ftoa(b,farray,3);
	printf("string de int:%s",array);
	printf("strinf de float%s",farray);

}