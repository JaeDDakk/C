#include <stdio.h>
#include <string.h>
int get_s(char* s)
{
	int i, count = 0;
	for (i = 0; s[i] != NULL; i++)
	{
		tolower(s[i]);
	}
	for (i = 0; i < strlen(s) / 2; i++)
	{
		if (s[i] != s[strlen(s) - 1 - i])
			count++;
	}
	return count;
}
void main()
{
	char s[100];
	printf("문자열을 입력하시오: ");
	gets_s(s, 99);
	
	if (get_s(s) == 0)
	{
		printf("회문 입니다.");
	}
	else
		printf("회문이 아닙니다.");
}