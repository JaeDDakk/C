#include <stdio.h>
#define PIE 3.14
typedef struct {
	int x, y;
}point;
typedef struct {
	point center;	//원의 중심
	double radius;	//원의 반지름
}circle;
double area(circle c);
double perimeter(circle c);
int main()
{
	circle c;

	printf("원의 중심점: ");
	scanf("%d %d", &c.center.x, &c.center.y);
	printf("원의 반지름: ");
	scanf("%lf", &c.radius);
	printf("원의 면적=%lf, 원의 둘레=%lf", area(c), perimeter(c));
	return 0;
}
double area(circle c)
{
	return c.radius * c.radius * PIE;
}
double perimeter(circle c)
{
	return c.radius * 2 * PIE;
}