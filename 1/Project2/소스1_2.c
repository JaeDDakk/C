#include <stdio.h>
#define YARD 91.44
int main()
{
	double yard, cm;

	printf("yard?  ");
	scanf_s("%lf", &yard);

	cm = yard * YARD;

	printf("%lf yard = %lfcm", yard, cm);

	return 0;
}