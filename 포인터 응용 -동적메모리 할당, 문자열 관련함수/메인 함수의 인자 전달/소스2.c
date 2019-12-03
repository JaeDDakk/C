#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
	int i;
	printf("인자의 개수: %d \n", argc);
	for (i = 0; i < argc; i++)
	{
		printf("%d,%s\n",i,argv[i]);
	}
	return 0;
}