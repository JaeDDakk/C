#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* arr;
	int size, i;
	int* p;

	printf("칸 입력 >> ");
	scanf("%d", &size);

	arr = (int*)malloc(sizeof(int) * size);
	for (p = arr; p < arr + size; p++)
	{
		printf("값 입력 >> ");
		scanf("%d", p);
	}

	for (p = arr; p < arr + size; p++)
	{
		printf("%d\n", *p);
	}
	free(arr);
	return 0;
}