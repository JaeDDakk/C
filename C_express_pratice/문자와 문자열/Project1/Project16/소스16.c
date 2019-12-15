#include <stdio.h>
#include <string.h>
int main()
{
	char s[100];
	char temp;
	int i, count = 0;
	printf("광고하고 싶은 텍스트를 입력하시오: ");
	gets_s(s, sizeof(s));
	printf("===================================\n");
	while (count < strlen(s))
	{
		for (i = 0; i < strlen(s); i++)
		{
			printf("%c", s[i]);
		}printf("\n");
		for (i = 0; i < strlen(s); i++)
		{
			if (i == 0)
			{
				temp = s[strlen(s)-1];
				s[strlen(s)-1] = s[i];
				s[i] = s[i + 1];
			}
			else if (i == strlen(s) - 1)
				s[i] = temp;
			else
				s[i] = s[i + 1];
		}
		count++;
	}
	return 0;
}