/*18번
 *공백이없는문자열을입력받고, 정수를입력받아서
 *문자열의맨뒤부터정수만큼출력하는프로그램을작성하시오.
 *만약, 입력받은정수가문자열의길이보다크다면
 *맨뒤부터맨처음까지모두출력해야한다.
 *문자열의길이는100 이하이다.
 */
#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	char asdf[100] = { NULL };
	int a;
	printf("문자열 입력 >> ");
	scanf("%s", asdf, 99);

	printf("정수 입력 >> ");
	scanf("%d", &a);

	for (int i = 100; i >= 0; i--)
	{
		if (asdf[i] != NULL)
		{
			for (int j = a; j >= 0; j--)
			{
				printf("%c", asdf[i--]);
			}
		}
	}
	return 0;
}
//모르겠어요요요요요요요