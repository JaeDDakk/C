#include <stdio.h>
int main()
{
	int year;

	printf("연도 입력 >> ");
	scanf_s("%d", &year);

	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		printf("leap year\n");
	else
		printf("not leap year\n");
	
	return 0;
}