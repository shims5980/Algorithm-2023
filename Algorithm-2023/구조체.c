/*	과목: 알고리즘
	이름: 심기윤
	학번: 201910852
	실습날짜: 2023. 4. 18
	실습내용: 구조체	*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct _point {
	int x;
	int y;
	int z;
}Point;

Point myPoints[10] = { {0, 0, 0} };
Point yourPoints[] = { {1, 2, 3}, {4, 5, 6} };

Point sum(Point argPoints[], int size) //배열을 넘길때 배열의 크기를 함께 넘긴다.
{
	Point result = { 0, 0, 0 };

	for (int i = 0; i < size; i++)
	{
		result.x = result.x + argPoints[i].x;
		result.y += argPoints[i].y;
		result.z += argPoints[i].z;
	}

	return result;
}

int main(void)
{
	int size = sizeof(yourPoints) / sizeof(yourPoints[0]); //36바이트 / 12바이트
	sum(yourPoints, size);

	return 0;
}


//typedef struct {
//	double x;
//	double y;
//}Point;
//
//void main()
//{
//	Point jum1 = { 4.0, 2.0 };
//	Point jum2 = { .x = 4.0, .y = 2.0 };
//	Point jum3 = jum2;
//}

