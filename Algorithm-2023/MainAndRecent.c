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


void main0()
{
	int menu;

	while (1)
	{
		main_UI();

		// gotoxy(); �޴� �Է� ĭ���� �̵�
		scanf("%d", &menu);	// ����ڷκ��� �޴� �Է¹ޱ�
		
		// �Է¹��� �޴��� ���� �޴� ����
		if (menu == 1)
			find1();
		else if (menu == 2)
			bookmark1();
		else if (menu == 3)
			recent();
		else if (menu == 4)
			break;
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
		//FILE* fp = fopen(".txt", "r");
		//
		//// �ֱ� ��� ����� ���Ͽ��� ��� ��������
		//while (fscanf(fp, "%c\t%c\n", begin, end) != EOF)
		//	i++;

		record_UI_3_1();
		// gotoxy(); ����� ������ ����� ��ġ


		//������� ������ ���
		//for (j = 0; j < i; j++)
		//{
		//	// gotoxy(   x��ǥ ���� , y��ǥ �� ���� ���� (ex. +(j*2))   );  ����� ��ġ ����
		//	printf("%6s\t%6s\n", begin[j], end[j]);
		//}

		// �������� ���ư���
		gotoxy(82, 28);
		printf("���ư��÷��� �ƹ�Ű�� �Է����ּ���...");
		if (_getch())
			break;
	}
}