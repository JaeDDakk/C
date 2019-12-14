#include <stdio.h>
int str_chr(char* s, int c)
{
	int i, count = 0;
	for (i = 0; s[i] != NULL; i++)
	{
		if (s[i] == c)
			count++;
	}
	return count;
}
void main()
{
	char str[100];
	char c;
	printf("문자열을 입력하시오: ");
	gets_s(str, sizeof(str) - 1);
	printf("개수를 셀 문자를 입력하시오. ");
	c = getchar();
	printf("%c의 개수: %d",c ,str_chr(&str, c));
}