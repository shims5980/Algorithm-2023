/*	����: �˰���
	�̸�: �ɱ���
	�й�: 201910852
	�ǽ���¥: 2023. 4. 18
	�ǽ�����: �ϳ��� ž	*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

void hanoi_tower(int n, char from, char tmp, char to);

int main(void)
{
	hanoi_tower(4, 'A', 'B', 'C');
	
	return 0;
}

void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n == 1)
		printf("���� 1���� %c���� %c�� �ű��.\n", from, to);
	else
	{
		hanoi_tower(n - 1, from, to, tmp);
		printf("���� %d�� %c���� %c�� �ű��.\n", n, from, to);
		hanoi_tower(n - 1, tmp, from, to);
	}
}