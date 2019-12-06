#include <stdio.h>
#define size 10
int main()
{
	int arr[size] = { 0 };
	int i, a;
	int* p = arr;
	do
	{
		printf("ют╥б >> ");
		scanf("%d", &a);
		if (a == 0)
			break;
		*(p + (a / 10)) += 1;	//arr[a / 10]++;
	}while (a >= 0 && a < 100);
	for (i = 0; i < size; i++)
	{
		if (*(p + i) != 0)
			printf("  %d : %d\n", i, *(p + i));
	}
	return 0;
}