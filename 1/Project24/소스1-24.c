#include <stdio.h>
void change(int n);
int sum(int n);
void main()
{
	int n;
	printf("입력하시오: ");
	scanf("%d", &n);
	change(n);
	printf("\t%d\n", sum(n));
}
void change(int n)
{
	printf("%d", n % 10);
	if (n / 10 > 0)
		change(n / 10);
}
int sum(int n)
{
	if (n == 0)
		return 0;
	else
		return n % 10 + sum((n - n % 10) / 10, 10);
}