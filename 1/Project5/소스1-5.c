#include <stdio.h>
int isEqual(int a, int b);
int main()
{
	int x;
	int a, b;
	printf("두 수 입력 ");
	scanf_s("%d %d", &a, &b);

	x = isEqual(a, b);
	if (x==1)
		printf("equal");
	else
		printf("not equal");
	
	
	
	/*if (a == b)
		printf("equal");
	else
		printf("not equal");*/
	
}
int isEqual(int a, int b)
{
	if (a == b)
		return 1;
	else
		return 0;
}