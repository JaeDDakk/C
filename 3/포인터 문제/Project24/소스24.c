#include <stdio.h>
int main()
{
	int arData[5][5] = { 0 };
	int X = 0;
	int Y = 0;
	int count = 0;
	int nPivot = 0;

	X = 2;
	Y = 4;
	count = 1;
	nPivot = 4;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < nPivot; j++) {
			arData[Y][X] = count;
			count++;
			X++;
			Y++;
			if (X > 4) {
				X = 0;
			}
			if (Y > 4) {
				Y = 0;
			}
		}
		arData[Y][X] = count++;
		Y--;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d ", arData[i][j]);
		}
		printf("\n");
	}

}