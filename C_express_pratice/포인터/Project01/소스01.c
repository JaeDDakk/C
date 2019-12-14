#include <stdio.h>
int main()
{
	int x = 0x12345678;
	unsigned char* xp = (char*)&x;

	printf("바이트순서: %x %x %x %x\n", xp[0], xp[1], xp[2], xp[3]);
	return 0;		//리틀 엔디언
}