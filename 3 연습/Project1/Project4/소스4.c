#include <stdio.h>
int main()
{
	int* p;
	double* pa;
	printf("%d\n", sizeof(p));
	printf("%d", sizeof(pa));
}// 32비트에선 4 4
 // 64비트에선 8 8