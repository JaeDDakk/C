#include <stdio.h>
#define size 6
int main()
{
	double asdf[size];
	double a;
	double sum = 0;

	for (int i = 0; i < size; i++)
	{
		printf("ÀÔ·Â >> ");
		scanf_s("%lf", &a);
		asdf[i] = a;
		sum += a;
	}
	printf("Æò±Õ: %.1lf", sum / size);
	return 0;
}