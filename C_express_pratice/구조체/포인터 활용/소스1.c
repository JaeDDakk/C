#include <stdio.h>
#include <string.h>
typedef struct {
	int id;
	char title[100];
	char author[20];
	char subject[100];
}BOOK;
int main()
{
	BOOK book;//변수의 선언

	book.id = 1;
	strcpy(book.title, "바람과 함께 사라지다");
	strcpy(book.author, "마가렛 미첼");
	
	printf("{ %d, %s, %s }", book.id, book.title, book.author);
	return 0;	
}