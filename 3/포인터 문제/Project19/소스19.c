#include <stdio.h>
#include <string.h>
#define size 100;
int main()
{
	char asdf[200] = { NULL };
	char a[100];
	for (int i = 0; i < 2; i++)
	{
		printf("문자열 입력 >> ");
		fgets(a, sizeof(a) - 1, stdin);
		strcat(asdf, a);
	}

}
//모르겠다 