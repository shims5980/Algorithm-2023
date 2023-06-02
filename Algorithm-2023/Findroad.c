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
		
		// gotoxy(); 출발지 입력 칸으로 이동
		scanf("%s", start);
		
		// 뒤로 돌아가기 위한 조건
		if (start == '0')
		{
			// 뒤로 돌아가는 UI함수
			break;
		}

		//gotoxy();, 도착지 입력 칸으로 이동
		scanf("%s", end);

		// 뒤로 돌아가기 위한 조건
		if (end == '0')
		{
			// 뒤로 돌아가는 UI함수
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

		// 올바른 입력이면 1, 그렇지 않으면 0
		if (user == 1)
			find3(start, end);
		else
		{
			// 뒤로 돌아가는 UI함수
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
		// 출발지와 도착지 최근기록에 저장하는 파일 함수 매개변수(const char* start, const char* end)
		// 지역 저장된 파일 함수

		/*size = sizeof(지역이름변수) / sizeof(지역이름변수[0]);

		for (i = 0; i < size; i++)
		{
			if (srtcmp(start, 지역변수이름[i]) == 0)
				starti = i;

			if (strcmp(end, 지역변수이름[i]) == 0)
				endi = i;

			if (srtcmp(start, 지역변수이름[i]) != 0 || srtcmp(end, 지역변수이름[i]) != 0)
			{
				check = 1;
				break;
			}
		}*/

		if (check == 1)
		{
			// 오류 UI 함수
			find1();
		}


		// distance = 지역간 거리 저장된 2차원 배열 함수   입력: starti, endi   출력: 시간(double형)
		time = (int)distance;


		// find_UI_1.3();
		
		// gotoxy();	출발지 출력할 칸으로 이동
		printf("%s", start);

		// gotoxy();	도착지 출력할 칸으로 이동
		printf("%s", end);
		
		// gotoxy();	거리 출력할 칸으로 이동
		printf("%.2lfkm", distance);

		time *= 1.5;

		if (time >= 60)
		{
			hour = time / 60;
			min = time % 60;
			// gotoxy();	시간 출력할 칸으로 이동
			printf("%02d시간 %2d분", hour, min);
		}
		else
		{
			// gotoxy();	시간 출력할 칸으로 이동
			printf("%02d분", time);
		}

		// gotoxy();	안내문구 출력할 곳으로 이동
		printf("돌아가시려면 아무키나 눌러주새요...");
		if (_getch())
			main0();
	}
}