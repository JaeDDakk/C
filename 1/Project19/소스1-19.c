#include <stdio.h>
int main()
{
	int n;
	char a = 65;

	printf("정수 입력 >> ");
	scanf_s("%d", &n);


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-i; j++)
		{
			if (a > 90)
				a = 65;
			printf("%c", a++);
		}
		printf("\n");
	}
	return 0;
}