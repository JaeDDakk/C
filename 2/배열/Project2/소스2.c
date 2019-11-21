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
	printf("%c %c %c", asdf[0], asdf[2], asdf[4]);
	return 0;
}