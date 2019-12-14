#include <stdio.h>
void get_int(int* px, int* py);
int main()
{
	int px, py;
	get_int(&px, &py);
	printf("정수의 합은 %d", px + py);
}
void get_int(int* px, int* py)
{
	printf("2개의 정수를 입력하시오(예: 10 20): ");
	scanf("%d %d", px, py);
}