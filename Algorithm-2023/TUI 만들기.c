#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void gotoxy(int x, int y);

// ¤² + ÇÑÀÚ
int main(void)
{
	system("cls");
	gotoxy(4, 4);
	putchar('A');
	gotoxy(2, 2);
	printf("¡à");
	getche();
	
	return 0;
}

void gotoxy(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}