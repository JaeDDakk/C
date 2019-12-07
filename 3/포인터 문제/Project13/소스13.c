#include <stdio.h>
#define student 5
#define subject 4
int main()
{
	int asdf[5][4];
	int count = 0, sum;
	int* p = asdf[4];

	for (int i = 0; i < student; i++)
	{
		printf("학생 %d >> ", i + 1);
		scanf_s(" %d %d %d %d", [0], &asdf[i][1], &asdf[i][2], &asdf[i][3]);
		printf("\n");
	}

	for (int i = 0; i < student; i++)
	{
		sum = 0;
		for (int j = 0; j < subject; j++)
		{
			sum += asdf[i][j];
		}

		if (sum / 4 < 80)
			printf("fail\n");
		else
		{
			printf("pass\n");
			count++;
		}
	}
	printf("pass한 사람: %d명", count);
	return 0;
}