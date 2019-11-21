#include <stdio.h>
#define SIZE 5
int main()
{
	char asdf[SIZE];
	char ch;

	for (int i = 0; i < SIZE; i++)
	{
		printf("ют╥б >> ");
		scanf_s(" %c", &ch);

		asdf[i] = ch;
	}
	for (int i = 0; i < SIZE; i++)
		printf("%c", asdf[i]);
	return 0;
}