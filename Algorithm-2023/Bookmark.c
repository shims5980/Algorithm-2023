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


void bookmark1()
{
	int menu;

	// bookmakr_UI_4.1();
	while (1)
	{
		//gotoxy() 입력 받을 칸으로 이동
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
			// 오류 UI 함수
			continue;
		}
	}
}
void bookmark11()
{
	char name[20][20];
	int count, i;

	//bookmakr_UI_4.2();

	// 즐겨찾기 목록 읽는 파일 함수 (name, &count);
	// count값만큼 for문을 돌려 목록을 출력한다.

	if (_getch())
		bookmark1();
}
void bookmark12()
{
	char name[20];

	//bookmakr_UI_4.3();

	while (1)
	{
		// gotoxy(); 지역이름 입력받을 칸으로 이동
		scanf("%s", name);

		if (name == '0')
			break;


		FILE* fp = fopen(".txt", "a");
		fprintf(fp, "%s\n", name);
		fclose(fp);

		// 즐겨찾기 추가 완료 UI 함수
		break;
	}
}
void bookmark13()
{
	char name[20][20];
	int x[20], y[20], i = 0, j, user;

	// bookmakr_UI_4.4();
	while (1)
	{
		FILE* fp = fopen(".txt", "r");

		if (fp == NULL)
		{
			// gotoxy(); 안내문 출력할 칸으로 이동
			printf("즐겨찾기가 비어있습니다.\n");
			break;
		}

		while (fscanf(fp, "%s\t%d\t%d\n", name[i], &x[i], &y[i]) != EOF)
			i++;

		fclose(fp);

		for (j = 0; j < i; j++)
		{
			// gotoxy(); 즐겨찾기 목록 출력할 칸으로 이동
			printf("%d번\t%s\n", j + 1, name[j]);
		}

		// gotoxy(); 명령 입력받을 칸 이동
		scanf("%d", &user);
		if (user == 0)
			break;

		user -= 1;

		if (user == i)
			strcpy(name[user], NULL);
		else
		{
			for (j = user; j < i - 1; j++)
				strcpy(name[j], name[j + 1]);
		}

		// 즐겨찾기 삭제 완료 UI 함수
		break;
	}
}