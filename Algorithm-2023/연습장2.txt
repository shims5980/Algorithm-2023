#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define P 38
#define PP P+21
// ┫ ┃ ━ ┓ ┛ ┗ ┏ ┳ ┻ ┣ ╋
void gotoxy(int x, int y);

int main(void)
{
	int i;

	for (i = 0; i < 120; i++)
		printf("━");
	for (i = 0; i < 28; i++)
		printf("┃\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t┃\n");
	for (i = 0; i < 120; i++)
		printf("━");
	gotoxy(1, 8);
	for (i = 0; i < 120; i++)
		printf("━");

	gotoxy(1, 1);
	printf("┏");
	gotoxy(120, 1);
	printf("┓");
	gotoxy(1, 8);
	printf("┣");
	gotoxy(120, 8);
	printf("┫");
	gotoxy(1, 30);
	printf("┗");
	gotoxy(120, 30);
	printf("┛");

	// ㄴ
	gotoxy(P+2, 4);
	printf("┃");
	gotoxy(P+2, 5);
	printf("┃");
	gotoxy(P+2, 6);
	printf("┗");
	
	gotoxy(P+4, 6);
	printf("━");

	// ㅔ
	gotoxy(P+6, 5);
	printf("━");
	gotoxy(P+7, 5);
	printf("┃");
	gotoxy(P+7, 4);
	printf("┃");
	gotoxy(P+7, 6);
	printf("┃");
	
	// ㅣ
	gotoxy(P+9, 6);
	printf("┃");
	gotoxy(P+9, 4);
	printf("┃");
	gotoxy(P+9, 5);
	printf("┃");

	// ㅂ
	gotoxy(P + 13, 4);
	printf("┃");
	gotoxy(P + 13, 5);
	printf("┣");
	gotoxy(P + 15, 5);
	printf("━");
	gotoxy(P + 13, 6);
	printf("┗");
	gotoxy(P + 15, 6);
	printf("━");
	gotoxy(P + 17, 4);
	printf("┃");
	gotoxy(P + 17, 5);
	printf("┫");
	gotoxy(P + 17, 6);
	printf("┛");
	
	// ㅣ
	gotoxy(P + 19, 6);
	printf("┃");
	gotoxy(P + 19, 4);
	printf("┃");
	gotoxy(P + 19, 5);
	printf("┃");

	// ㄴ
	gotoxy(PP + 2, 4);
	printf("┃");
	gotoxy(PP + 2, 5);
	printf("┃");
	gotoxy(PP + 2, 6);
	printf("┗");

	gotoxy(PP + 4, 6);
	printf("━");

	// ㅔ
	gotoxy(PP + 6, 5);
	printf("━");
	gotoxy(PP + 7, 5);
	printf("┃");
	gotoxy(PP + 7, 4);
	printf("┃");
	gotoxy(PP + 7, 6);
	printf("┃");

	// ㅣ
	gotoxy(PP + 9, 6);
	printf("┃");
	gotoxy(PP + 9, 4);
	printf("┃");
	gotoxy(PP + 9, 5);
	printf("┃");

	// ㅂ
	gotoxy(PP + 13, 4);
	printf("┃");
	gotoxy(PP + 13, 5);
	printf("┣");
	gotoxy(PP + 15, 5);
	printf("━");
	gotoxy(PP + 13, 6);
	printf("┗");
	gotoxy(PP + 15, 6);
	printf("━");
	gotoxy(PP + 17, 4);
	printf("┃");
	gotoxy(PP + 17, 5);
	printf("┫");
	gotoxy(PP + 17, 6);
	printf("┛");

	// ㅣ
	gotoxy(PP + 19, 6);
	printf("┃");
	gotoxy(PP + 19, 4);
	printf("┃");
	gotoxy(PP + 19, 5);
	printf("┃");

	

	/*gotoxy(50, 8);
	for (i=0;i<20;i++)
		printf("-");
	
	for (i = 0; i < 3; i++)
	{
		gotoxy(50, 9 + i);
		printf("|\t\t    |\n");
	}
	gotoxy(50, 12);
	for (i = 0; i < 20; i++)
		printf("-");




	gotoxy(50, 16);
	for (i = 0; i < 20; i++)
		printf("-");

	for (i = 0; i < 3; i++)
	{
		gotoxy(50, 17 + i);
		printf("|\t\t    |\n");
	}
	gotoxy(50, 20);
	for (i = 0; i < 20; i++)
		printf("-");



	gotoxy(50, 24);
	for (i = 0; i < 20; i++)
		printf("-");

	for (i = 0; i < 3; i++)
	{
		gotoxy(50, 25 + i);
		printf("|\t\t    |\n");
	}
	gotoxy(50, 28);
	for (i = 0; i < 20; i++)
		printf("-");*/


	gotoxy(10, 15);
	printf("1. 길찾기");
	gotoxy(10, 18);
	printf("2. 최근기록");
	gotoxy(10, 21);
	printf("3. 즐겨찾기");
	gotoxy(10, 24);
	printf("4. 종료");


	
	gotoxy(90, 29);
	printf("PG ver. B202305301752");




	gotoxy(3, 2);
	printf("UI S/N: U 0.1");
	gotoxy(2, 29);
	printf("원하시는 메뉴 번호를 입력하세요>>> ");
	_getch();
	
    return 0;
}

void gotoxy(int x, int y)
{
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}