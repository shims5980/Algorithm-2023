#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "navi.h"

void bookmark1();
void bookmark11();
void bookmark12();
void bookmark13();
extern void bookmark_UI_4_1(); // 즐찾 메인화면
extern void bookmark_UI_4_2(); // 즐찾한 목록 출력하는 화면

extern void bookmark_UI_4_3(); // 즐찾 지역 추가 화면확인(작게 띄움)
extern void bookmark_UI_4_4(); // 즐찾 지역 삭제 화면확인(작게 띄움)

extern void bookmark_UI_4_3_1(); // 즐찾 지역 추가 화면
extern void bookmark_UI_4_4_1(); // 즐찾 지역 삭제 화면

void bookmark1()
{
	int menu;

	while (1)
	{
		bookmark_UI_4_1();
		scanf("%d", &menu);

		if (menu == 1)
			bookmark11();
		else if (menu == 2)
			bookmark12();
		else if (menu == 3)
			bookmark13();
		else if (menu == 4)
			break;
		else
		{
			Error_UI_1_0();
			continue;
		}
	}
}

void bookmark11()
{
	char name[20][20];
	int count, i;

	while(1)
	{
		bookmark_UI_4_2();

		bookmark_watch(1);							// 즐겨찾기 지역 조회 

		gotoxy(80, 29);
		printf("돌아가시려면 아무키나 입력하시오...");
		if (_getch())
			break;
	}
}

void bookmark12()
{
	char name[20];

	while (1)
	{
		bookmark_UI_4_3_1(); // 즐찾 지역 추가 화면

		gotoxy(49, 13);
		scanf("%s", name);

		if (strcmp(name, "0") == 0)
		{
			Back_UI_1_1();
			break;
		}

		bookmark_addtion(name);

		bookmark_UI_4_3(); // 즐찾 지역 추가 화면확인(작게 띄움)
		break;
	}
}

void bookmark13()
{
	char name[20][20];
	int x[20], y[20], i = 0, j, user, size;


	while (1)
	{
		bookmark_UI_4_4_1();

		FILE* fp = fopen("bookmark.txt", "r");

		while (fscanf(fp, "%s\n", name[i]) != EOF)
			i++;

		if (i == 0)
		{
			gotoxy(16, 16); //안내문 출력할 칸으로 이동
			printf("즐겨찾기가 비어있습니다. 즐겨찾기를 먼저 추가해주세요");
			Sleep(3000);
			break;
		}

		fclose(fp);

		for (j = 0; j < i; j++)
		{
			gotoxy(16, 12 + ( 2 * j));	//즐겨찾기 목록 출력할 칸으로 이동
			printf("%d번\t%s\n", j + 1, name[j]);
		}

		gotoxy(50, 29);
		scanf("%d", &user);
		if (user == 0)
		{
			Back_UI_1_1();
			break;
		}

		user -= 1;

		if (user == i)
			strcpy(name[user], NULL);
		else
		{
			for (j = user; j < i - 1; j++)
				strcpy(name[j], name[j + 1]);
		}

		fp = fopen("bookmark.txt", "w");
		for (j = 0; j < i - 1; j++)
			fprintf(fp, "%s\n", name[j]);
		fclose(fp);

		bookmark_UI_4_4(); // 즐찾 지역 삭제 화면확인(작게 띄움)
		break;
	}
}