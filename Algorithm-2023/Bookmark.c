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
		//gotoxy() �Է� ���� ĭ���� �̵�
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
			// ���� UI �Լ�
			continue;
		}
	}
}
void bookmark11()
{
	char name[20][20];
	int count, i;

	//bookmakr_UI_4.2();

	// ���ã�� ��� �д� ���� �Լ� (name, &count);
	// count����ŭ for���� ���� ����� ����Ѵ�.

	if (_getch())
		bookmark1();
}
void bookmark12()
{
	char name[20];

	//bookmakr_UI_4.3();

	while (1)
	{
		// gotoxy(); �����̸� �Է¹��� ĭ���� �̵�
		scanf("%s", name);

		if (name == '0')
			break;


		FILE* fp = fopen(".txt", "a");
		fprintf(fp, "%s\n", name);
		fclose(fp);

		// ���ã�� �߰� �Ϸ� UI �Լ�
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
			// gotoxy(); �ȳ��� ����� ĭ���� �̵�
			printf("���ã�Ⱑ ����ֽ��ϴ�.\n");
			break;
		}

		while (fscanf(fp, "%s\t%d\t%d\n", name[i], &x[i], &y[i]) != EOF)
			i++;

		fclose(fp);

		for (j = 0; j < i; j++)
		{
			// gotoxy(); ���ã�� ��� ����� ĭ���� �̵�
			printf("%d��\t%s\n", j + 1, name[j]);
		}

		// gotoxy(); ��� �Է¹��� ĭ �̵�
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

		// ���ã�� ���� �Ϸ� UI �Լ�
		break;
	}
}