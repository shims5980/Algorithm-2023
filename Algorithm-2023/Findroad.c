#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "navi.h"

void find1();
void find2(const char* start, const char* end);
void find3(const char* start, const char* end);

void find1()
{
	char start[20], end[20];

	while (1)
	{
		// find_UI_1.1();
		
		// gotoxy(); ����� �Է� ĭ���� �̵�
		scanf("%s", start);
		
		// �ڷ� ���ư��� ���� ����
		if (start == '0')
		{
			// �ڷ� ���ư��� UI�Լ�
			break;
		}

		//gotoxy();, ������ �Է� ĭ���� �̵�
		scanf("%s", end);

		// �ڷ� ���ư��� ���� ����
		if (end == '0')
		{
			// �ڷ� ���ư��� UI�Լ�
			break;
		}

		find2(start, end);
	}
}

void find2(const char* start, const char* end)
{
	int user;

	while (1)
	{
		// find_UI_1.2();

		// �ùٸ� �Է��̸� 1, �׷��� ������ 0
		if (user == 1)
			find3(start, end);
		else
		{
			// �ڷ� ���ư��� UI�Լ�
			break;
		}
	}
}

void find3(const char* start, const char* end)
{
	int size, check = 0, i, starti, endi, time, hour, min;
	double distance;

	while (1)
	{
		// ������� ������ �ֱٱ�Ͽ� �����ϴ� ���� �Լ� �Ű�����(const char* start, const char* end)
		// ���� ����� ���� �Լ�

		/*size = sizeof(�����̸�����) / sizeof(�����̸�����[0]);

		for (i = 0; i < size; i++)
		{
			if (srtcmp(start, ���������̸�[i]) == 0)
				starti = i;

			if (strcmp(end, ���������̸�[i]) == 0)
				endi = i;

			if (srtcmp(start, ���������̸�[i]) != 0 || srtcmp(end, ���������̸�[i]) != 0)
			{
				check = 1;
				break;
			}
		}*/

		if (check == 1)
		{
			// ���� UI �Լ�
			find1();
		}


		// distance = ������ �Ÿ� ����� 2���� �迭 �Լ�   �Է�: starti, endi   ���: �ð�(double��)
		time = (int)distance;


		// find_UI_1.3();
		
		// gotoxy();	����� ����� ĭ���� �̵�
		printf("%s", start);

		// gotoxy();	������ ����� ĭ���� �̵�
		printf("%s", end);
		
		// gotoxy();	�Ÿ� ����� ĭ���� �̵�
		printf("%.2lfkm", distance);

		time *= 1.5;

		if (time >= 60)
		{
			hour = time / 60;
			min = time % 60;
			// gotoxy();	�ð� ����� ĭ���� �̵�
			printf("%02d�ð� %2d��", hour, min);
		}
		else
		{
			// gotoxy();	�ð� ����� ĭ���� �̵�
			printf("%02d��", time);
		}

		// gotoxy();	�ȳ����� ����� ������ �̵�
		printf("���ư��÷��� �ƹ�Ű�� �����ֻ���...");
		if (_getch())
			main0();
	}
}