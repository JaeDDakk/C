#include<stdio.h>
int main()
{
	int country;
	printf("1. Korea \n2. USA \n3. Japan \n4. China \nÀÔ·Â >> ");
	scanf_s("%d", &country);
	
	switch (country)
	{
	case 1:
		printf("Seoul");
		break;
	case 2:
		printf("Washington");
		break;
	case 3:
		printf("Tokyo");
		break;
	case 4:
		printf("Beijing");
		break;
	default:
		printf("none");
		break;
	}
	return 0;
}