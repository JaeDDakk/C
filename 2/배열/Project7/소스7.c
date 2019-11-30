#include <stdio.h>
#include <string.h>
#define size 6
int main()
{
	char ch;
	char asdf[size] = { 'H','E','L','O','W','~'};
	printf("ют╥б >> ");
	scanf_s("%c", &ch);
	
	for (int i = 0; i < size; i++)
	{
		
		if (asdf[i] == ch)
		{
			if (asdf[i] != ch)
			{
				printf("none");
				break;
			}
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}