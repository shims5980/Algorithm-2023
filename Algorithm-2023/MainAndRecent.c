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
		// UI 0 함수

		// gotoxy(); 메뉴 입력 칸으로 이동
		scanf("%d", &menu);	// 사용자로부터 메뉴 입력받기
		
		// 입력받은 메뉴에 따른 메뉴 실행
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
			// 오류 발생 UI 함수
			continue;
		}
	}
}

void recent()
{
	char begin[20], end[20];
	int i = 0, j;
	FILE* fp = fopen(".txt", "r");
	
	// 최근 기록 저장된 파일에서 기록 가져오기
	while (fscanf(fp, "%c\t%c\n", begin, end) != EOF)
		i++;
	
	// recent_UI_3.1();
	// gotoxy(); 출발지 도착지 출력할 위치
	printf("출발지\t도착지\n");

	//출발지와 도착지 출력
	for (j = 0; j < i; j++)
	{
		// gotoxy(   x좌표 고정 , y좌표 한 셀씩 증가 (ex. +(j*2))   );  출력할 위치 지정
		printf("%6s\t%6s\n", begin[j], end[j]);
	}

	// 메인으로 돌아가기
	// 안내문 출력할 위치 조정
	// gotoxy();
	printf("돌아가시려면 아무키나 입력해주세요...");
	if (_getch())
		main0();
}