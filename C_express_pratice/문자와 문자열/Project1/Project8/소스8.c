#include <stdio.h>
#include <string.h>
char* token;
int count(char* s)
{
	int count = 0;
	token = strtok(s, " ");
	while (token != NULL)
	{
		token = strtok(NULL, " ");
		count++;
	}
	return count;
}
void main()
{
	char s[100];
	printf("문자열을 입력하시오: ");
	gets_s(s, sizeof(s) - 1);

	printf("단어의 수는 %d입니다.", count(s));
}