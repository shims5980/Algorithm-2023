#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy(int x, int y);

int main(void)
{
	int i;

	for (i = 0; i < 120; i++)
		printf("=");
	for (i = 0; i < 28; i++)
		printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
	for (i = 0; i < 120; i++)
		printf("=");
	
	gotoxy(55, 3);
	printf("네비게이션\n");
	gotoxy(1, 5);
	for (i = 0; i < 120; i++)
		printf("=");

	gotoxy(50, 8);
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
		printf("-");


	//10 18 26
	gotoxy(56, 10);
	printf("1.길찾기");
	gotoxy(55, 18);
	printf("2.최근기록");
	gotoxy(57, 26);
	printf("3.종료");

	gotoxy(2, 29);
	printf("원하시는 메뉴 번호를 입력하세요>>> ");




	gotoxy(1, 31);
	printf("\n");

	
    return 0;
}

void gotoxy(int x, int y)
{
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}