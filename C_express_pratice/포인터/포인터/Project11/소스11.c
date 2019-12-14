#include <stdio.h>
#define SIZE 4
void merge(int* A, int* B, int* C, int size);
int main(void)
{
	int A[SIZE] = { 2,5,7,8 };
	int B[SIZE] = { 1,3,4,6 };
	int C[SIZE * 2] = { 0 };
	int i;
	printf("배열A: ");
	for (i = 0; i < SIZE; i++)
		printf("%d ", A[i]);
	printf("\n");
	printf("배열B: ");
	for (i = 0; i < SIZE; i++)
		printf("%d ", B[i]);
	printf("\n");
	merge(A, B, C, SIZE * 2);
	printf("배열C: ");
	for (i = 0; i < SIZE * 2; i++)
		printf("%d ", C[i]);
	printf("\n");
	return 0;
}
void merge(int* A, int* B, int* C, int size)
{
	int i, j, k;
	i = 0; j = 0; k = 0;
	for (k = 0; k < size; k++)
	{
		if (i >= size / 2)
		{
			C[k] = B[j];
			j++;
		}
		else if (j >= size / 2)
		{
			C[k] = A[i];
			i++;
		}
		else if (A[i] < B[j])
		{
			C[k] = A[i];
			i++;
		}
		else if (A[i] > B[j])
		{
			C[k] = B[j];
			j++;
		}
	}

}