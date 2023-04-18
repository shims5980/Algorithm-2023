/*	과목: 알고리즘
	이름: 심기윤
	학번: 201910852
	실습날짜: 2023. 4. 18
	실습내용: 하노이 탑	*/
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
		printf("원판 1개를 %c에서 %c로 옮긴다.\n", from, to);
	else
	{
		hanoi_tower(n - 1, from, to, tmp);
		printf("원판 %d을 %c에서 %c로 옮긴다.\n", n, from, to);
		hanoi_tower(n - 1, tmp, from, to);
	}
}