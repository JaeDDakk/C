#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define size 3
int main()
{
	char asdf[size][50];
	
	for (int i = 0; i < size; i++)
	{
		printf("문장 입력 >> ");
		fgets(asdf[i], 49, stdin);
	 }
	for (int i = 0; i < size; i++)
	{
		printf("%s", asdf[i]);
	}
	return 0;
}