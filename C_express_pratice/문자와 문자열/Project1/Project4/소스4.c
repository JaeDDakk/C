#include <stdio.h>
int str(char *s,int c)
{
	int i, count = 0;
	for (i = 0; s[i] != NULL; i++)
	{
		if (s[i] == c)
			count++;
	}
	return count;
}
void count_chr(char* s)
{
	int i;
	for (i = 'a'; i <= 'z'; i++)
	{
		printf("%c: %d\n", i, str(s, i));
	}
}
void main()
{
	char s[100];
	char c;
	printf("문자열을 입력하시오: ");
	gets_s(s, sizeof(s));
	count_chr(&s);
}