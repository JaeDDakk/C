#include<stdio.h>
int main()
{
	int a, b, c;

	printf(" 세 개의 수 입력 >> ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a < b)
		if (a < c)
			printf("%d", a);
		else
			printf("%d", c);
	else
		if (b < c)
			printf("%d", b);
		else
			printf("%d", c);
	return 0;
}