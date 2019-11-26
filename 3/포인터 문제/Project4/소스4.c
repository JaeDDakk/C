#include <stdio.h>
int main()
{
	int asdf[5];
	int* a;
	int i;
	a = &asdf;

	for (i = 0; i < 5; i++)
	{
		printf("ÀÔ·Â >> ");
		scanf("%d", a + i);
	}
	int minimum;
	minimum = *a;
	for (i = 1; i < 5; i++)
	{
		if (minimum > * (a + i))
			minimum = *(a + i);
	}
	printf("ÃÖ¼Ú°ª: %d", minimum);
	return 0;
}