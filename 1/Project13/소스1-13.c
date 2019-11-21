#include <stdio.h>
int main()
{
	int ans, sum = 0, count = 0;
	double avr;
	
	while(1)
	{ 
		printf("점수 입력 (0~100 이외의 수 입력 종료) >> ");
		scanf_s("%d", &ans);
		
		if (ans < 0 || ans>100)
			break;
		count++;
		sum += ans;
	}
	avr = sum / count;
	printf("합게: %d / 평균: %.1lf", sum, avr);
	return 0;
}