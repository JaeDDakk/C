#include<stdio.h>
#include<string.h>
void s_c(char* s)
{
	if (s[0] <= 'z' && s[0] >= 'a')
	{
		s[0] = s[0] - 'a' + 'A';
	}
	s[strlen(s)]='.';
}
void main()
{
	char s[100] = { NULL };
	printf("텍스트를 입력하시오: ");
	gets_s(s, sizeof(s) - 1);
	s_c(s);
	printf("%s", s);
}