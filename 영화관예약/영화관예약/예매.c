#include <stdio.h>
#include <string.h>
#define SEAT_COL 10
#define SEAT_ROW 10
#define USER_MAX 10
void pattern();
void seat();
void seat_status();
void reservation();
void cancel_reservation();
int print_menu();
int ans1;
int seats[SEAT_ROW][SEAT_COL] = { 0 };	//좌석 배열
char Login[USER_MAX][2][30];
int main()
{
	char id[30], pw[30];
	int first_menu_ans, index;
	while (1)
	{
		printf("1. 로그인 및 좌석예약\n");
		printf("2. 회원가입\n");
		printf("3. 종료\n");
		scanf_s("%d", &first_menu_ans);

		if (first_menu_ans == 1) //로그인
		{

			printf("Id를 입력하시오: ");
			scanf_s("%s", id);
			index = 0;
			for (int i = 0; i < USER_MAX; i++)
			{
				if (strcmp(Login[index][0], id, 30) == 0)
				{
					printf("Pw를 입력하시오: ");
					scanf_s("%s", pw);
					if (strcmp(Login[index][1], pw, 30) == 0)
					{
						printf("로그인 되었습니다.\n\n");

						ans1 = print_menu(); //예약 취소 종료
						if (ans1 == 3)
							break;
						pattern();//========
						seat();//1 2 3 4....10
						pattern();//========
						seat_status(); // 0 0 0 0 0 0 0 0 0
						reservation(); // 예약, 이미예약되면 다시
						cancel_reservation();//취소, 이미빈자리면 다시
					}
				}
				index++;
			}
			printf("없다\n");
		} //로그인
		else if (first_menu_ans == 2)//회원가입
		{
			static int user_count = 0;
			if (user_count >= 9)
				printf("회원수가 가득 찼습니다.");
			else
			{
				while (1)
				{
					printf("Id를 입력하시오: ");
					scanf_s("%s", Login[user_count][0],id,30);
					index = 0;
					for (int i = 0; i < USER_MAX; i++)//중복 확인
					{
						if (strcmp(Login[index][0], id, 30) == 0)
						{
							printf("아이디가 중복되었습니다.");
							break;
						}
						index++;
					}
					strcpy_s(Login[user_count][0], id, 30);
					printf("Pw를 입력하시오: ");
					strcpy_s(Login[user_count][1], pw, 30);
					user_count++;
					break;
				}
			}
		}
		else if (first_menu_ans == 3)//종료
		{
			break;
		}
	}
	return 0;
}//메인
void pattern()
{
	int i;
	for (i = 0; i < 36; i++)
	{
		printf("=");
	}printf("\n");
}// ==
void seat()
{
	int i;
	printf("   |");
	for (i = 0; i < SEAT_COL; i++)
	{
		if (i >= 10)
			printf("  %d", i + 1);
		else
			printf("  %d", i + 1);
	}printf("\n");
}//열 숫자
int print_menu()
{

	printf("1. 예약\n");//1.예약 2.취소 3.종료
	printf("2. 취소\n");
	printf("3. 종료\n");
	scanf_s("%d", &ans1);
	return ans1;
}
void seat_status()
{
	int i, j;
	for (i = 0; i < SEAT_ROW; i++) //좌석 현황표
	{
		if (i >= 9)					//행 1
			printf("%d |", i + 1);	//행 2 ...
		else
			printf(" %d |", i + 1);	//행 10

		for (j = 0; j < SEAT_COL; j++)
		{
			if (j >= 10)
				printf("   %d", seats[i][j]);
			else
				printf("  %d", seats[i][j]);
		}printf(" |\n");
	}pattern();
}
void reservation()
{
	int ans2, ans3;
	if (ans1 == 1) //예약
	{
		printf("몇번째 좌석을 예약하시겠습니까?(행 ,열) \n");
		scanf_s("%d %d", &ans2, &ans3);
		if (seats[ans2 - 1][ans3 - 1] == 0)
		{
			seats[ans2 - 1][ans3 - 1] = 1;
			printf("예약되었습니다.\n");
		}
		else
			printf("이미 예약된 좌석입니다.\n");
	}
}
void cancel_reservation()
{
	int ans2, ans3;
	if (ans1 == 2)//취소
	{
		printf("몇번째 좌석을 취소하시겠습니까?(행 ,열) \n");
		scanf_s("%d %d", &ans2, &ans3);
		if (seats[ans2 - 1][ans3 - 1] == 1)
		{
			seats[ans2 - 1][ans3 - 1] = 0;
			printf("취소되었습니다.\n");
		}
		else
			printf("이미 빈좌석입니다.\n");
	}
}