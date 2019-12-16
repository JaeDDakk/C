#include <stdio.h>
typedef struct {
	double real;
	double imag;
}complex;
void complex_add(complex c1, complex c2)
{
	printf("합의 실수부: %lf\n", c1.real+c2.real);
	printf("합의 허수부: %lf\n", c2.imag+c2.imag);
}
int main()
{
	complex c1,c2;
	
	printf("첫 번째 복소수의 실수부: ");	scanf("%lf",&c1.real);

	printf("첫 번째 복소수의 허수부: ");	scanf("%lf", &c1.imag);

	printf("두 번째 복소수의 실수부: ");	scanf("%lf", &c2.real);

	printf("두 번째 복소수의 허수부: ");	scanf("%lf", &c2.imag);
	complex_add(c1, c2);
	
}