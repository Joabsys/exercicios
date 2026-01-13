#include <stdio.h>
void add(float, float);
int main()
{
	add(4,5);

}
void add(float a,float b)
{
	float c;

	c=a+b;
	printf("A soma dos numeros:%g+%g=%g",a,b,c);
}