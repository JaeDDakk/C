#include <stdio.h>
void array_add(int* A, int* B, int* C, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		*(C + i) = *(A + i) + *(B + i);
	}
	printf("A[] = ");
	for (i = 0; i < size; i++)
	{
		printf("%d", *(A + i));
	}
	printf("\nB[] = ");
	for (i = 0; i < size; i++)
	{
		printf("%d", *(B + i));
	}
	printf("\nC[] = ");
	for (i = 0; i < size; i++)
	{
		printf("%d", *(C + i));
	}
}
int main()
{
	int A[10] = { 1,2,3,};
	int B[10] = { 0,};
	int C[10];

	array_add(A, B, C, 10);
	return 0;
}