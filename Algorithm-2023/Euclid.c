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
	
	//1. If(b == 0) return a // 종료조건 of 재귀호출!
	if (b == 0)
		return a;

	//2. return Euclid(b, a mod b)
	return Euclid(b, a % b);
}