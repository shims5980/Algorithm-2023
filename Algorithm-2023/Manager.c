#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "navi.h"

void manager1();
void manager11();
void manager12();
extern void admin_UI_2_1();   // ������ ����ȭ��
extern void admin_UI_2_2_1(); // ������ �����߰� ȭ��
extern void admin_UI_2_3_1(); // ������ �������� ȭ��
extern void admin_UI_2_2();    // �����߰� ȭ��Ȯ��(�۰� ���) ��
extern void admin_UI_2_3();    // �������� ȭ��Ȯ��(�۰� ���) ��


void manager1()
{
	int menu;

	while (1)
	{
		admin_UI_2_1();
		
		scanf("%d", &menu);

		if (menu == 1)
			manager11();
		else if (menu == 2)
			manager12();
		else if (menu == 3)
			break;
		else
		{
			Error_UI_1_0();
			continue;
		}
	}
}

void manager11()
{
	char name[20];
	int x, y;

	while (1)
	{
		admin_UI_2_2_1(); // ������ �����߰� ȭ��
		region_addition();

		admin_UI_2_2();    // �����߰� ȭ��Ȯ��(�۰� ���) ��
		break;
	}
}

void manager12() 
{
	char name[20][20];
	int index[20], x[20], y[20], i = 0, j, user;

	while (1)
	{
		admin_UI_2_3_1(); // ������ �������� ȭ��

		FILE* fp = fopen("region.txt", "r");

		while (fscanf(fp, "%d\t%s\t%d\t%d\n", &index[i], name[i], &x[i], &y[i]) != EOF)
			i++;

		if (i == 0)
		{
			gotoxy(16, 16); //�ȳ��� ����� ĭ���� �̵�
			printf("���� ����� ����ֽ��ϴ�. ������ ���� �߰����ּ���");
			Sleep(3000);
			break;
		}

		fclose(fp);

		for (j = 0; j < i; j++)
		{
			gotoxy(16, 12 + (2 * j));	//���� ��� ����� ĭ���� �̵�
			printf("%d��\t%s\n", j + 1, name[j]);
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
		{
			strcpy(name[user], NULL);
			index[user] = NULL;
			x[user] = NULL;
			y[user] = NULL;
		}
		else
		{
			for (j = user; j < i - 1; j++)
			{
				index[j] = index[j + 1];
				strcpy(name[j], name[j + 1]);
				x[j] = x[j + 1];
				y[j] = y[j + 1];
			}
		}

		fp = fopen("region.txt", "w");
		for (j = 0; j < i - 1; j++)
			fprintf(fp, "%d\t%s\t%d\t%d\n", index[j], name[j], x[j], y[j]);
		fclose(fp);

		admin_UI_2_3();    // �������� ȭ��Ȯ��(�۰� ���) ��
		break;
	}
}