#include <stdio.h>
int main()
{
	int kor, mat, eng, sum, avg;

	printf("kor >> ");
	scanf_s("%d",&kor);
	printf("mat >> ");
	scanf_s("%d",&mat);
	printf("eng >> ");
	scanf_s("%d",&eng);

	sum = kor + mat + eng;
	avg = sum / 3;

	printf("sum %d\n", sum);
	printf("avg %d\n", avg);

	return 0;
}