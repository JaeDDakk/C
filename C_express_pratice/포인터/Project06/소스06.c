#include <stdio.h>
#define SIZE 10
void array_copy(int* a, int* b, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		*(b + i) = *(a + i);
	}
	printf("a[]:");
	for (i = 0; i < size; i++)
	{
		printf("%d", *(a + i));
	}
	printf("\nb[]:");
	for (i = 0; i < size; i++)
	{
		printf("%d", *(b + i));
	}
}
int main()
{
	int a[SIZE] = {1,2,3,0,};
	int b[SIZE];

	array_copy(a,b,SIZE);
}