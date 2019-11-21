#include<stdio.h>
int main()
{
	int i, j;

	for (j = 1; j <= 9; j++)
	{
		printf("2 * %d = %d  ",j , 2 * j);
	}
	printf("\n");
	for (i = 2; i <= 9; i++)
	{
		printf("2 * %d = %d\n", i, 2 * i);
	}
	return 0;
}