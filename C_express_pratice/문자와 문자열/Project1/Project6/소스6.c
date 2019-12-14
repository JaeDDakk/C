#include <stdio.h>
void str_upper(char* s)
{
	int i;
	for (i = 0; s[i] != NULL; i++)
	{
		if (s[i] <= 'z' && s[i] >= 'a')//소문자
		{
			s[i] = (s[i] - 'a' + 'A');
		}
	}
}
void main()
{
	char s[100];
	printf("문자열을 입력하시오: ");
	gets_s(s,99);

	str_upper(s);
	puts(s);
}