#include <stdio.h>
void add();
int main()
{
	add();

}
void add()
{
	float a,b,c;
	printf("digite dois numeros!\n");
	scanf("%g%g",&a,&b);
	while(a<=0||b<=0)
	{
		printf("Digite dois numeros validos!\n");
		printf("digite dois numeros!\n");
		scanf("%g%g",&a,&b);
	}
	c=a+b;
	printf("A soma dos numeros:%g+%g=%g",a,b,c);
}