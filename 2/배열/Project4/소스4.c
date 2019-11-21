#include <stdio.h>
#define size 5
int main()
{
	int asdf[size];
	int a;
	int minimum;

	for (int i = 0; i < size; i++)
	{
		printf("ÀÔ·Â >> ");
		scanf_s("%d", &a);
		asdf[i] = a;
	}
	minimum = asdf[0];

	for (int i = 1; i < size; i++)
	{
		if (asdf[i] < minimum)
			minimum = asdf[i];
	}
	printf("ÃÖ¼Ú°ª: %d", minimum);
	return 0;
}