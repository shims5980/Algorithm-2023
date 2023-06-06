#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "navi.h"

void manager1();
void manager11();
void manager12();
extern void admin_UI_2_1();   // 관리자 메인화면
extern void admin_UI_2_2_1(); // 관리자 지역추가 화면
extern void admin_UI_2_3_1(); // 관리자 지역삭제 화면
extern void admin_UI_2_2();    // 지역추가 화면확인(작게 띄움) 완
extern void admin_UI_2_3();    // 지역삭제 화면확인(작게 띄움) 완


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
		admin_UI_2_2_1(); // 관리자 지역추가 화면

		gotoxy(46, 16);  //지역이름 입력받을 칸으로 이동
		scanf("%s", name);

		if (name == '0')
		{
			Back_UI_1_1();
			break;
		}

		gotoxy(46, 20); //좌표 입력받을 칸으로 이동
		scanf("%d", &x);

		gotoxy(46, 24); //좌표 입력받을 칸으로 이동
		scanf("%d", &y);

		/*FILE* fp = fopen(".txt", "a");
		fprintf(fp, "%s\t%d\t%d\n", name, x, y);
		fclose(fp);*/

		admin_UI_2_2();    // 지역추가 화면확인(작게 띄움) 완
		break;
	}
}

void manager12() 
{
	char name[20][20];
	int x[20], y[20], i = 0, j, user;

	while (1)
	{
		admin_UI_2_3_1(); // 관리자 지역삭제 화면

		//FILE* fp = fopen(".txt", "r");
		//while (fscanf(fp, "%s\t%d\t%d\n", name[i], &x[i], &y[i]) != EOF)
		//	i++;
		//fclose(fp);

		//for (j = 0; j < i; j++)
		//{
		//	// gotoxy(); 지역 목록 출력할 칸으로 이동
		//	printf("%d번\t%s\t%d\t%d", j+1, name[j], x[j], y[j]);
		//}

		gotoxy(37, 29); // 명령 입력받을 칸 이동
		scanf("%d", &user);
		if (user == 0)
		{
			Back_UI_1_1();
			break;
		}
		
		/*user -= 1;

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
		}*/
		
		admin_UI_2_3();    // 지역삭제 화면확인(작게 띄움) 완
		break;
	}
}