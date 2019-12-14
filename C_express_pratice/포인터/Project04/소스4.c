#include <stdio.h>
void array_print(int* a, int size)
{
	int i;
	printf("a[] = { ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", *(a + i));
	}printf("}\n");
}
int main()
{
	int a[10] = { 1,2,3,4,0,0,0,0,0,0 };
	int size = 10;
	array_print(a, size);
	return 0;
}
	