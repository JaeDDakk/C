#include<stdio.h>
int main()
{
	int n;
	printf("정수 입력 >> ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++ )
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}