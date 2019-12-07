#include <stdio.h>
#define rows 2
#define cols 4
int main()
{
	int asdf_1[rows][cols];
	int asdf_2[rows][cols];
	int mul;
	int* p1[] = asdf_1[cols];
	int* p2[] = asdf_2[cols];

	printf("first array\n");
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			scanf("%d", asdf_1[j] + i); 
		printf("\n");
	}
	printf("second array\n");
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			scanf("%d", asdf_2[j] + i);
		printf("\n");
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			mul = *(asdf_1[j] + i) * *(asdf_2[j] + i);
			printf("%3d ", mul);
		}printf("\n");
	}return 0;
}