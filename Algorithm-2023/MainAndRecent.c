#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "navi.h"

void recent();
void main0();
extern void main_UI();        // ���� ȭ��
extern void record_UI_3_1();   // �ֱٱ�� �ѹ��� �����ִ� ȭ��
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
	
		scanf("%d", &menu);	// ����ڷκ��� �޴� �Է¹ޱ�
		
		// �Է¹��� �޴��� ���� �޴� ����
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
		printf("���ư��÷��� �ƹ�Ű�� �Է����ּ���...");
		if (_getch())
			break;
	}
}