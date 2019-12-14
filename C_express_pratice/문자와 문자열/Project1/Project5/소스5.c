#include <stdio.h>
#include <ctype.h>
int change_c(char c)
{
	if (c <= 'z' && c >= 'a')
		return toupper(c);
	if (c <= 'Z' && c >= 'A')
		return tolower(c);

}
void main()
{
	int c;
	
	while (1)
	{
		printf("문자를 입력하시오: ");
		c = getchar();
		getchar();
		if (c == '.')
			break;
		if (((c < 'A') || (c > 'Z')) && ((c < 'a')) || ((c > 'z')))
		{
			printf("경고\n");
		}
		else
		{
			printf("%c\n",change_c(c));
		}
	}
}