#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "navi.h"

void recent();
void main0();
extern void main_UI();        // 메인 화면
extern void record_UI_3_1();   // 최근기록 한번에 보여주는 화면
extern void recent_path_watch();
extern void End_UI_1_1();
extern void Start_UI_1_1();

void main0()
{
	int menu;
	Sleep(3000);
	Start_UI_1_1();
	while (1)
	{
		main_UI();
	
		scanf("%d", &menu);	// 사용자로부터 메뉴 입력받기
		
		// 입력받은 메뉴에 따른 메뉴 실행
		if (menu == 1)
			find1();
		else if (menu == 2)
			bookmark1();
		else if (menu == 3)
			recent();
		else if (menu == 4)
		{
			End_UI_1_1();
			break;
		}
		else if (menu == 9999)
			manager1();
		else
		{
			Error_UI_1_0();
			continue;
		}
	}
}

void recent()
{
	while(1)
	{
		char begin[20], end[20];
		int i = 0, j;

		record_UI_3_1();
		recent_path_watch(1);

		gotoxy(82, 29);
		printf("돌아가시려면 아무키나 입력해주세요...");
		if (_getch())
			break;
	}
}