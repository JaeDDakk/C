#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int count(char* s);
char* token;

int main()
{
	char s[100];
	
	printf("문자열 입력 >> ");
	gets_s(s, sizeof(s));
	
	printf("%d", count(s));
}
int count(char* s)
{
	int i, count = 0;
	token = strtok(s, " ");
		for (i = 0; token != NULL; i++)
		{
			token = strtok(NULL, " ");
			count++;
		}
		return count;
}