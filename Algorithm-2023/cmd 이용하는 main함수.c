/*	과목: 알고리즘
	이름: 심기윤
	학번: 201910852
	실습날짜: 2023. 4. 18
	실습내용: cmd이용한 main함수*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	
	printf("Hello, world!\n");

	for (int i = 0; i < argc; i++)
		printf("%s", argv[i]);

	_getch();
	/*char s;
	scanf("%c", &s);*/
    return 0;
}
