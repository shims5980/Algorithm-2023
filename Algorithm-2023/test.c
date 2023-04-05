#include <stdio.h>
#include "euclid.h"

int testEuclid()
{
	int gcd = 0;
	printf("안녕하세요. 테스트합니다.\n");

	gcd = euclidRecursive(24, 12);

	printf("%d와 %d의 최대공약수는 %d입니다.\n", 24, 12, gcd);


	return 0;
}