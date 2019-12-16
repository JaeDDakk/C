#include <stdio.h>
#include <string.h>
#define SIZE 100
typedef struct {
	char mail[SIZE];
	char receiver[SIZE];
	char caller[SIZE];
	char contents[SIZE];
	char date[SIZE];
	int priority;
}e_mail;
int main()
{
	e_mail s;
	// 대충 넘어간다..
}