#include<stdio.h>
#define size 100
int main()
{
	int asdf[size];
	int a;

	for (int i = 0; i < size; i++)
	{	
		printf("ют╥б >> ");
		scanf_s("%d", &a);

		asdf[i] = a;

		if (a == 0)
		{
			for (int j = i; j > 0; j--)
				printf("%d ", asdf[j-1]);
			break;
		}
	}
	return 0;
}