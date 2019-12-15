#include <stdio.h>
#include <string.h>
#define size 100;
int main()
{
	char s1[100];
	char s2[100];
	int i, count = 0;
	printf("문자열 입력 >> ");
	gets_s(s1, sizeof(s1));
	printf("문자열 입력 >> ");
	gets_s(s2, sizeof(s2));

	for (i = 0; s1[i] != NULL; i++)
	{
		count++;
	}
	for (i = 0; s2[i] != NULL; i++)
	{
		count++;
	}
	printf("%d", count);
}