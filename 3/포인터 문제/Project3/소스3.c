#include <stdio.h>
int main()
{
	int asdf[100];
	int* a = asdf; //a = &asdf;?
	int count = 0;
	while (1)
	{
		printf("ют╥б >> ");
		scanf("%d", a + count);
		if (asdf[count] == 0)
			break;
		count++;
	}
	for (int i = 0; i < count; i++)
	{
		printf("%d ", *(a + count-1 - i));
	}
	return 0;
}