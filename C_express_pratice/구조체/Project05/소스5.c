#include <stdio.h>
typedef struct {
	int x, y;
}P;
int equal(P p1, P p2);
int main()
{
	P p1, p2;
	printf("첫번째 점의 좌표를 입력하시오 (x, y): ");
	scanf("%d %d",&p1.x,&p1.y);
	printf("두번째 점의 좌표를 입력하시오 (x, y): ");
	scanf("%d %d",&p2.x,&p2.y);
	if (equal(p1, p2) == 1)
		printf("(%d, %d) == (%d, %d)", p1.x, p1.y, p2.x, p2.y);
	else
		printf("(%d, %d) != (%d, %d)", p1.x, p1.y, p2.x, p2.y);
	return 0;
}
int equal(P p1, P p2)
{
	if ((p1.x == p2.x) && (p1.y == p2.y))
		return 1;
	else
		return 0;
}