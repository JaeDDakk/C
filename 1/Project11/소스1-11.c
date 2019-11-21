#include <stdio.h>
int main()
{
	int a, b, c;
	printf("두 수 입력 >> ");
	scanf_s("%d %d", &a, &b);

	printf("a = %d / b = %d\n", a, b);
	c = a;
	a = b;
	b = c;
	printf("a = %d / b = %d\n", a, b);
	return 0;
}