#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "navi.h"

void recent();
void main0();

void main0()
{
	int menu;

	while (1)
	{
		// UI 0 �Լ�

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
			// ���� �߻� UI �Լ�
			continue;
		}
	}
}

void recent()
{
	char begin[20], end[20];
	int i = 0, j;
	FILE* fp = fopen(".txt", "r");
	
	// �ֱ� ��� ����� ���Ͽ��� ��� ��������
	while (fscanf(fp, "%c\t%c\n", begin, end) != EOF)
		i++;
	
	// recent_UI_3.1();
	// gotoxy(); ����� ������ ����� ��ġ
	printf("�����\t������\n");

	//������� ������ ���
	for (j = 0; j < i; j++)
	{
		// gotoxy(   x��ǥ ���� , y��ǥ �� ���� ���� (ex. +(j*2))   );  ����� ��ġ ����
		printf("%6s\t%6s\n", begin[j], end[j]);
	}

	// �������� ���ư���
	// �ȳ��� ����� ��ġ ����
	// gotoxy();
	printf("���ư��÷��� �ƹ�Ű�� �Է����ּ���...");
	if (_getch())
		main0();
}