#include <stdio.h>
int main() 
{
	int c[][20] = { 0 }, a, b, i, j;
	scanf_s("%d %d", &a, &b);

	for (i = 0; i < a; i++) 
	{
		for (j = 0; j < b; j++) 
		{
			c[i][j] = 1;
		}
	}
	for (i = 1; i < a; i++) 
	{
		for (j = 1; j < b; j++) 
		{
			c[i][j] = c[i - 1][j] + c[i][j - 1];
		}
	}
	for (i = 0; i < a; i++) 
	{
		for (j = 0; j < b; j++) 
		{
			printf("%3d", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
