#include <stdio.h>
#include <ctype.h>
void get_response(char* prompt)
{
	int i;
	for (i = 0; prompt[i] != NULL; i++)
	{
		if (prompt[i] <= 'Z' && prompt[i] >= 'A')
		{
			prompt[i] = tolower(prompt[i]);
		}
	}
	if (strcmp("yes", prompt)==0 || strcmp("ok", prompt)==0)
	{
		printf("긍정적인 답변");
	}
	else if (strcmp("no", prompt) == 0)
	{
		printf("부정적인 답변");
	}
}
void main()
{
	char prompt[10];
	printf("게임을 하시겠습니까? ");
	gets_s(prompt, 9);
	get_response(prompt);
}