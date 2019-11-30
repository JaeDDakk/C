#include <stdio.h>
#include <string.h>
#define size 3
int main()
{
	char asdf[size][50];
	char* p = asdf;

	for (int i = 0; i < size; i++)
	{
		printf("문장 입력 >> ");
		fgets((p + i), 49, stdin);
	}
	for (int i = 0; i < size; i++)
	{
		printf("%s", *(p + i));
	}
	return 0;
}
