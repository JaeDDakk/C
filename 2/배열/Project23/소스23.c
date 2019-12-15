#include <stdio.h>
#include <string.h>
int main()
{
	char s[100];
	char c;
	int i, count = 0, check = 0;

	printf("단어 입력 >> ");
	gets_s(s, sizeof(s));
	printf("찾을 문자 입력 >>");
	c = getchar();
	getchar();

	for (i = 0; s[i] != NULL; i++)
	{
		if (s[i] == c)
		{
			printf("%d", i);
			check++;
			break;
		}
	}
	if (check == 0)
	{
		printf("Notfound");
	}
}
	