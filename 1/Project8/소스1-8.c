#include <stdio.h>
int main()
{
	int a, b;

	printf("두 수 입력 >> ");
	scanf_s("%d %d", &a, &b);

	for (a; a <= b; a++)
		printf("%d ", a);

	return 0;
}