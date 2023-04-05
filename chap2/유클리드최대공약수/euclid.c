/*	실습내용: 유클리드 최대공약수 구하기
	실습날짜: 2023.03.20
	학번: 201910852
	이름: 심기윤	*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Euclid(int a, int b);
int test1_euclid()
{
	int gcd;

	gcd = Euclid(24, 14);

	printf("%d", gcd);

	return 0;
}
int main(void)
{
	test1_euclid();
}
int Euclid(int a, int b)
{
	
	//1. If(b == 0) return a
	if (b == 0)
		return a;

	//2. return Euclid(b, a mod b)
	return Euclid(b, a % b);
}
