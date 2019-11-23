/*10번 
 *영문대문자를입력받다가, 대문자이외의문자가입력되면
 *입력을중단하고, 입력한영문대문자들에대해
 *문자의개수를사전순으로출력하는프로그램을작성하시오.
 */
#include<stdio.h>
int main()
{
	char ch;
	char asdf[26] = { 0 };
	int b = 65;

	while (1)
	{
		printf("입력 >> ");
		scanf(" %c", &ch);
		if (ch >= 'A' || ch <= 'Z')
		{
			asdf[ch - 'A'] = ch;
		}
		else
			break;
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%c:",)
	}
}