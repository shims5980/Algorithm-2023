#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "navi.h"

void manager1();
void manager11();
void manager12();

void manager1()
{
	int menu;

	// admin_UI_2.1();
	while (1)
	{
		// gotoxy(); ����ڿ��� �Է¹��� ĭ���� �̵�
		scanf("%d", &menu);

		if (menu == 1)
			manager11();
		else if (menu == 2)
			manager12();
		else if (menu == 3)
			break;
		else
		{
			// ���� UI �Լ�
			continue;
		}
	}
}

void manager11()
{
	char name[20];
	int x, y;

	//admin_UI_2.2();

	while (1)
	{
		// gotoxy(); �����̸� �Է¹��� ĭ���� �̵�
		scanf("%s", name);

		if (name == '0')
			break;

		// gotoxy(); ��ǥ �Է¹��� ĭ���� �̵�
		scanf("%d", &x);
		// gotoxy(); ��ǥ �Է¹��� ĭ���� �̵�
		scanf("%d", &y);

		FILE* fp = fopen(".txt", "a");
		fprintf(fp, "%s\t%d\t%d\n", name, x, y);
		fclose(fp);

		// ���� �߰� �Ϸ� UI �Լ�
		break;
	}
}
void manager12() 
{
	char name[20][20];
	int x[20], y[20], i = 0, j, user;

	// admin_UI_2.3();
	while (1)
	{
		FILE* fp = fopen(".txt", "r");
		while (fscanf(fp, "%s\t%d\t%d\n", name[i], &x[i], &y[i]) != EOF)
			i++;
		fclose(fp);

		for (j = 0; j < i; j++)
		{
			// gotoxy(); ���� ��� ����� ĭ���� �̵�
			printf("%d��\t%s\t%d\t%d", j+1, name[j], x[j], y[j]);
		}

		// gotoxy(); ��� �Է¹��� ĭ �̵�
		scanf("%d", &user);
		if (user == 0)
			break;
		
		user -= 1;

		if (user == i)
		{
			strcpy(name[user], NULL);
			x[user] = 0;
			y[user] = 0;
		}
		else
		{
			for (j = user; j < i - 1; j++)
			{
				strcpy(name[j], name[j + 1]);
				x[j] = x[j + 1];
				y[j] = y[j + 1];
			}
		}
		
		// ���� ���� �Ϸ� UI �Լ�
		break;
	}
}