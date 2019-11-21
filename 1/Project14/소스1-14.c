#include<stdio.h>
int main()
{
	double width, height;
	char ans;
	while(1)
	{
	printf("¹Øº¯ ÀÔ·Â >> ");
	scanf_s("%lf", &width);
	printf("³ôÀÌ ÀÔ·Â >> ");
	scanf_s("%lf", &height);

	printf("»ï°¢Çü ³ÐÀÌ: %.1lf\n", width * height / 2);
	printf("Continue? ");
	scanf_s(" %c",&ans);
	
	if (ans != 'y' && ans != 'Y')
		break;
	} 
	return 0;
}