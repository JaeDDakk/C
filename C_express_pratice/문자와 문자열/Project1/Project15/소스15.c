#include <stdio.h>
#include <string.h>
int main()
{
	char op[10];
	int i,x, y;
	int result;
	printf("연산을 입력하시오: ");
	scanf("%s %d %d", op, &x, &y);
	if (strcmp(op, "add") == 0)
	{
		result = x + y;
	}
	if (strcmp(op, "sub") == 0)
	{
		result = x - y;
	}
	if (strcmp(op, "mul") == 0)
	{
		result = x * y;
	}
	if (strcmp(op, "div") == 0)
	{
		result = x / y;
	}
	printf("연산의 결과: %d\n",result);
}