#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "navi.h"

void find1();
void find2(const char* start, const char* end);
int find3(const char* start, const char* end);
extern void find_UI_1_1();    // ��ã�� ����ȭ��
extern void find_UI_1_2(char* str1, char* str2);    // ����� ������ �Է��ϸ� Ȯ�ι�
extern void find_UI_1_3();    // �Է��Ѱ� ������� ���

void find1()
{
	char start[20], end[20];

	while (1)
	{
		find_UI_1_1();
		
		gotoxy(34, 17);
		scanf("%s", start);
		
		// �ڷ� ���ư��� ���� ����
		if (strcmp(start, "0") == 0)
		{
			Back_UI_1_1();
			break;
		}

		gotoxy(34, 22);
		scanf("%s", end);

		// �ڷ� ���ư��� ���� ����
		if (strcmp(end, "0") == 0)
		{
			Back_UI_1_1();
			break;
		}

		find2(start, end);
	}
}

void find2(const char* start, const char* end)
{
	int user = 0;
	int shutdown;

	while (1)
	{
		find_UI_1_2(start, end);

		scanf("%d", &user);

		if (user == 1)
		{
			shutdown = find3(start, end);
		}
		else
		{
			Back_UI_1_1();
			break;
		}
		if (shutdown == 0)
			break;
	}
}

int find3(const char* start, const char* end)
{
	int size, check = 0, i, starti, endi, time, hour, min;
	double distance1;

	while (1)
	{
		recent_path(start, end);
		distance1 = distance_search(start, end);

		time = (int)distance1;

		find_UI_1_3();
		
		gotoxy(21, 12);		//����� ����� ĭ���� �̵�
		printf("%s", start);

		gotoxy(21, 16);		//������ ����� ĭ���� �̵�
		printf("%s", end);
		
		gotoxy(21, 20);		//�Ÿ� ����� ĭ���� �̵�
		printf("%.2lfkm", distance1);

		time *= 1.5;

		if (time >= 60)
		{
			hour = time / 60;
			min = time % 60;
			gotoxy(21, 24);		//�ð� ����� ĭ���� �̵�
			printf("%02d�ð� %2d��", hour, min);
		}
		else
		{
			gotoxy(21, 24);		//�ð� ����� ĭ���� �̵�
			printf("%02d��", time);
		}

		gotoxy(80, 28);
		printf("���ư��÷��� �ƹ�Ű�� �Է��Ͻÿ�...");
		if (_getch())
			break;
	}
	return 0;
}