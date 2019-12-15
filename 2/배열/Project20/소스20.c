#include <stdio.h>
#include <string.h>
void str(char* s);
int main()
{
	char s[100];
	
	printf("문자열 입력 >> ");
	gets_s(s, sizeof(s));
	str(s);
}
void str(char* s)
{
	int i;
	for (i = 0; i < strlen(s); i++)
	{
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 'a' + 'A';
				printf("%c", s[i]);
			}
			else
				printf("%c", s[i]);
		}
	}
}