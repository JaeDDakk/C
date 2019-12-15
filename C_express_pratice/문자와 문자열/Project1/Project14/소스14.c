#include <stdio.h>
#include <string.h>
int main()
{
	char s1[100];
	char f_word[100];
	char c_word[100];
	char* s2[100];
	char* token;
	int i, count = 0;
	printf("문자열을 입력하시오: ");
	fgets(s1, sizeof(s1), stdin);
	s1[strlen(s1) - 1] = NULL;
	///////////////////////////////////
	printf("찾을 문자열: ");
	fgets(f_word, sizeof(f_word), stdin);
	f_word[strlen(f_word) - 1] = NULL;
	///////////////////////////////////
	printf("바꿀 문자열: ");
	fgets(c_word, sizeof(c_word), stdin);
	c_word[strlen(c_word) - 1] = NULL;
	///////////////////////////////////
	token = strtok(s1, " ");

	for (i = 0; token != NULL; i++)
	{
		s2[i] = token;
		token = strtok(NULL, " ");
		count++;
	}

	for (i = 0; i < count; i++)
	{
		if (strcmp(f_word, s2[i]) == 0)
		{
			s2[i] = c_word;
		}
	}
	printf("수정된 문자열: ");
	for (i = 0; i < count; i++)
	{
		printf("%s ", s2[i]);
	}
	
	
}