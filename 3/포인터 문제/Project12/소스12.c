#include <stdio.h>
#define rows 2
#define cols 4
int main()
{
	int asdf_1[rows][cols];
	int asdf_2[rows][cols];
	int mul;

	printf("first array\n");
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			scanf_s("%d", &asdf_1[i][j]);
		printf("\n");
	}
	printf("second array\n");
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			scanf_s("%d", &asdf_2[i][j]);
		printf("\n");
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			mul = asdf_1[i][j] * asdf_2[i][j];
			printf("%d ", mul);
		}printf("\n");
	}return 0;
}