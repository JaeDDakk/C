#include <stdio.h>
int main()
{
	int arData[5][5] = {0};
	int nX = 0;
	int nY = 0;
	int nData = 0;
	int nPivot = 0;

	nX = 2;
	nY = 4;
	nData = 1;
	nPivot = 4;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < nPivot; j++) {
			arData[nY][nX] = nData;
			nData++;
			nX++;
			nY++;
			if (nX > 4) {
				nX = 0;
			}
			if (nY > 4) {
				nY = 0;
			}
		}
		arData[nY][nX] = nData++;
		nY--;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d ", arData[i][j]);
		}
		printf("\n");
	}
	
}