#include <stdio.h>
int main()
{
	char asdf[5];
	char* a = asdf;
	for (int i = 0; i < 5; i++)
	{
		printf("ют╥б >> ");
		scanf(" %c", a+i);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%c ", *(a+i));
	}
	return 0;
}