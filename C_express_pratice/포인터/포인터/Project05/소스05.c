#include <stdio.h>
void convert(double* grades, double* scores, int size);
int main()
{
	double grades[9] = { 0, 0.5,1,2,2.5,3,3.5,4,4.3 };
	double scores[9];
	convert(grades,scores,9);
}
void convert(double* grades, double* scores, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%.2lf  ", *(grades + i));
		*(scores + i) = 100 / 4.3 * (*(grades + i));
	}printf("\n");
	for (i = 0; i < size; i++)
	{
		printf("%.2lf  ", *(scores + i));
	}
}