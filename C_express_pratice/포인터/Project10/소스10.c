#include <stdio.h>
void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd)
{
	int a, b, c;
	a = x;
	b = y;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	*p_gcd = a;
	*p_lcm = (x * y) / (*p_gcd);
}
int main()
{
	int x, y;
	int p_lcm, p_gcd;
	printf("두개의 정수를 입력하시오: ");
	scanf("%d %d", &x, &y);
	get_lcm_gcd(x, y, &p_lcm, &p_gcd);
	printf("최소공배수는 %d입니다.\n최대공약수는 %d입니다.\n", p_lcm, p_gcd);
	
}