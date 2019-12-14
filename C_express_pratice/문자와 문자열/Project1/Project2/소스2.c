#include <stdio.h>
void space_delete(char* str)
{
	int i = 0;
	while (str[i] != NULL)
	{
		if (str[i] != ' ')
			printf("%c", str[i]);
		i++;
	}
}
int main()
{
	char str[100];
	printf("공백 문자가 있는 문자열을 입력하시오: ");
	gets(str);
	space_delete(str);
	return 0;
}