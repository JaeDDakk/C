#include <stdio.h>
#define size 6
int main()
{
	double asdf[size];
	double* p = asdf;
	int i;
	double sum = 0;
	
	for (i = 0; i < size; i++)
	{
		printf("ÀÔ·Â >> ");
		scanf("%lf", (p + i));
	}
	for (i = 0; i < size; i++)
	{
		sum += *(p+i);
	}
	printf("Æò±Õ: %.1lf", sum / size);
	return 0;
}