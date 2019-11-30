#include <stdio.h>
#define size 6
int main()
{
	char asdf[size] = { 'H','E','L','O','W','~' };
	char* p = asdf;
	char a;
	printf("ют╥б >> ");
	scanf(" %c", &a);

	for (int i = 0; i < size; i++)
	{
		if (a == *(p + i))
		{
			printf("%d\n", i);
		}
		printf("none");
	}
	return 0;
}