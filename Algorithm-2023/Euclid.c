#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Euclid(int a, int b);
int main(void)
{
	int gcd;

	gcd = Euclid(24, 14);

	printf("%d", gcd);

	return 0;
}
int Euclid(int a, int b)
{
	
	if (b = 0)
		return a;
	else
		return Euclid(a, a % b);
}