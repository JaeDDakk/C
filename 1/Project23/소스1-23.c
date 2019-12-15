#include <stdio.h>
int main()
{
	int i;

	for (i = 1; i <= 100; i++) {

		if ((i % 3 == 0) && (i % 5 == 0))
			printf("Â¦¸¸¼¼ ");
		if ((i / 10 == 3) || (i / 10 == 6) || (i / 10 == 9))
			printf("Â¦ ");
		else if ((i % 10 == 3) || (i % 10 == 6) || (i % 10 == 9))
			printf("Â¦ ");
		else if (i % 5 == 0)
			printf("¸¸¼¼ ");
		else if (i / 10 == 5)
			printf("¸¸¼¼ ");
		else
			printf("%d ", i);
	}
	return 0;
}