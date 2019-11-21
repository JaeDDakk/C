#include <stdio.h>
#define size 3
int main()
{
	int asdf[size][size] = { 0 };

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == j)
				asdf[i][j] = 1;
			printf("%d ", asdf[i][j]);
		}printf("\n");
	}
	return 0;
}