/*	����: �˰���
	�̸�: �ɱ���
	�й�: 201910852
	�ǽ���¥: 2023. 4. 18
	�ǽ�����: ����ü	*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct _point {
	int x;
	int y;
	int z;
}Point;

Point myPoints[10] = { {0, 0, 0} };
Point yourPoints[] = { {1, 2, 3}, {4, 5, 6} };

Point sum(Point argPoints[], int size) //�迭�� �ѱ涧 �迭�� ũ�⸦ �Բ� �ѱ��.
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
	int size = sizeof(yourPoints) / sizeof(yourPoints[0]); //36����Ʈ / 12����Ʈ
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

