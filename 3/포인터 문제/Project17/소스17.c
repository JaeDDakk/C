#include <stdio.h>
#define student 3
#define subject 3
int main()
{
	int asdf[student][subject];
	int i, j, sum;
	for (i = 0; i < student; i++)
	{
		printf("학생 %d >> ", i + 1);
		for (j = 0; j < subject; j++)
		{
			scanf(" %d", &asdf[i][j]);
		}
	}
	for (i = 0; i < student; i++)
	{
		sum = 0;
		for (j = 0; j < subject; j++)
		{
			sum += asdf[i][j];
		}
		printf("학생 %d의 총점: %d / 학생 %d의 평균: %.1lf\n", i + 1, sum, i, (double)sum / subject);
	}
	return 0;
}