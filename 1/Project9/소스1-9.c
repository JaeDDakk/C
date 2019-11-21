#include<stdio.h>
int main()
{
	int ans, sum=0;
	
	printf("정수 입력 >> ");
	scanf_s("%d", &ans);

	for (int i = 1; i <= ans; i++)
	{
		sum = sum+ i;
	}
	printf("%d", sum);
	return 0;
}