/*1 문제
 *100 미만의양의정수들에대하여,
 *입력받다가0이입력되면마지막에입력된0을제외하고,
 *그때까지입력된정수의십의자리숫자가
 *각각몇개인지작은수부터출력하시오.
 *(입력이0인숫자는출력하지않음)
 */
#include <stdio.h>
#define size 10
int main()
{
	int arr[size] = { 0 };
	int i, count = 0, a;

	do
	{
		printf("입력 >> ");
		scanf("%d", &a);
		if (a == 0)
			break;
		arr[a / 10]++;
	} while (a >= 0 && a < 100);
	for (i = 0; i < size; i++)
	{
		if (arr[i] != 0)
			printf("  %d : %d\n", i, arr[i]);
	}
	return 0;
}