#include <stdio.h>
int count(char* s);
int main()
{
	char s[100];
	printf("문자열을 입력하시오: ");
	fgets(s, sizeof(s), stdin);
	printf("구두점의 개수는 %d입니다.", count(s));
	return 0;
}
int count(char* s)
{
	int i, count = 0;
	
	for (i = 0; s[i] != NULL; i++)
	{
		if (s[i] == '.' || s[i] == ',')
		{
			count++;
		}
	}
	return count;
}