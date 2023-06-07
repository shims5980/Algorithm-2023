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
void shape();
void tips1();
void tips1_1();
void tips1_2();
void tips1_3();


void find1()
{
	char start[20], end[20];

	
	while (1)
	{
		find_UI_1_1();
		tips1();

		gotoxy(34, 17);
		scanf("%s", start);
		
		// �ڷ� ���ư��� ���� ����
		if (strcmp(start, "0") == 0)
		{
			Back_UI_1_1();
			break;
		}
		else if (strcmp(start, "1") == 0) //�Է°��ɵ���
		{
			gotoxy(34, 17);
			printf("      ");
			tips1_1();
			gotoxy(110, 27);
			printf("Enter");
			if (_getch())
				continue;
		}
		else if (strcmp(start, "2") == 0) //���ã�� 
		{
			gotoxy(34, 17);
			printf("      ");
			tips1_2();
			continue;
		}
		else if (strcmp(start, "3") == 0) // �ֱٱ��
			continue;
		//tips1_3();

		gotoxy(34, 22);
		scanf("%s", end);

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

void tips1()
{
	shape();

	gotoxy(97, 10);
	printf("MENU");

	gotoxy(85, 14);
	printf("0. ���ư���");

	gotoxy(85, 18);
	printf("1. �Է� ������ ���ø��");

	gotoxy(85, 22);
	printf("2. ���ã�� ���");

	gotoxy(85, 26);
	printf("3. �ֱٱ�� ���");

}

void tips1_1()
{
	char name[20][20];
	int index[20], x[20], y[20], i = 0, j, user;

	shape();

	FILE* fp = fopen("region.txt", "r");

	while (fscanf(fp, "%d\t%s\t%d\t%d\n", &index[i], name[i], &x[i], &y[i]) != EOF)
		i++;

	fclose(fp);


	gotoxy(85, 10);
	printf("�Է� ������ ���");

	for (j = 0; j < i; j++)
	{
		gotoxy(85, 12 + (2 * j));	//���� ��� ����� ĭ���� �̵�
		printf("%s\n", name[j]);
	}
}

void tips1_2()
{
	shape();

	bookmark_watch(2);
}

void tips1_3()
{
	
	shape();

	recent_path_watch(2);
}

void shape()
{
	int i;

	gotoxy(81, 9);
	for (i = 0; i < 35; i++)
		printf("��");

	gotoxy(81, 9);
	printf("��");
	gotoxy(116, 9);
	printf("��");

	for (i = 0; i < 18; i++)
	{
		gotoxy(81, 10 + i);
		printf("��                                  ��\n");
	}

	gotoxy(81, 28);
	for (i = 0; i < 35; i++)
		printf("��");

	gotoxy(81, 28);
	printf("��");
	gotoxy(116, 28);
	printf("��");
}