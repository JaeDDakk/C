#include <stdio.h>
long long factorial(long long n);
long long get_n();
int main()
{
	long long n;
	n = get_n();
	printf("%lld",factorial(n));
}
long long get_n()
{
	long long n;
	printf("정수 입력 >> ");
	scanf_s("%lld", &n);
	return n;
}
long long factorial(long long n)
{
	if (n == 1)
	{
		printf("%lld!= 1\n", n);
		return 1;
	}
	else 
	{
		printf("%lld! = %lld * %lld!\n", n, n, n - 1);
		return n * factorial(n - 1);
	}
}