#include <stdio.h>
int main()
{
	int year, month;

	printf("연도 입력 >> ");
	scanf_s("%d %d", &year, &month);

	if (month == 1)
		printf("31");
	else if (month == 2)
	{
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
			printf("29");
		else
			printf("28");
	}
	else if (month == 3)
		printf("31");
	else if (month == 4)
		printf("30");
	else if (month == 5)
		printf("31");
	else if (month == 6)
		printf("30");
	else if (month == 7)
		printf("31");
	else if (month == 8)
		printf("31");
	else if (month == 9)
		printf("30");
	else if (month == 10)
		printf("31");
	else if (month == 11)
		printf("30");
	else if (month == 12)
		printf("31");
	return 0;
}