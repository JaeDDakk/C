#include <stdio.h>
int main()
{
	int a, b, result;

	printf(" 두 수 입력 >> ");
	scanf_s("%d %d",&a,&b);

	if (a < b)
	{
		printf("%d", b - a) ;
	}
	else
	{
		printf("%d", a - b);
	}
	return 0;
}