#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s[100];
	char* word[100];
	char* token;
	int i, count = 0;

	printf("성과 이름을 대문자로 입력하시오: ");
	fgets(s, sizeof(s), stdin);
	s[strlen(s) - 1] = NULL;
	for (i = 0; s[i] != NULL; i++)
	{
		s[i] = tolower(s[i]); //소문자로 변환
	}
	token = strtok(s, " ");
	for (i = 0; token != NULL; i++)
	{
		word[i] = token;
		token = strtok(NULL, " ");
		count++;
	}
	printf("변환된 이름: %s, %s", word[1], word[0]);
}