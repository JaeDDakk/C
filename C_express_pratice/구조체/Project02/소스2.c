#include <stdio.h>
#include <string.h>
typedef struct {
	int number;
	char name[100];
	int balance;
}__account;
int main()
{
	__account account;
	account.number = 1;
	strcpy(account.name,"ȫ�浿");
	account.balance = 100000;
	printf("{ %d, %s, %d }", account.number, 
		account.name, account.balance);
	return 0;
}