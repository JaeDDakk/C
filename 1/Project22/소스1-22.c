#include <stdio.h>
int gcd(int a, int b);
int lcm(int a, int b);
int main()
{
	int a, b;
	printf("두 수 입력 >> ");
	scanf_s("%d %d", &a, &b);

	printf("최대 공약수 = %d / 최소 공배수 = %d", gcd(a, b), lcm(a, b));
	return 0;
	
}

int gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}
int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}
