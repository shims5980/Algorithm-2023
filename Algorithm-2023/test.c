#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "euclid.h"

int testEuclid()
{
	clock_t start, finish;
	double duration;
	int gcdRecursive = 0, gcdRepeative = 0, num1 = 0, num2 = 0, times = 100000;
	srand(time(NULL));

	num1 = rand() % 1000 + 1000;
	num2 = rand() % 100 + 10;

	printf("안녕하세요. int형 데이터 타입 테스트함수 입니다.\n");

	start = clock();
	for (int i=0;i<times;i++)
	{
		gcdRecursive = euclidRecursive(num1, num2);
	}
	finish = clock();

	duration = (double)(finish - start) / CLOCKS_PER_SEC;

	printf("재귀함수 호출을 이용한 %d와 %d의 최대공약수는 %d입니다.\n", num1, num2, gcdRecursive);
	printf("걸린 시간은 %lf초 입니다.\n", duration);

	start = clock();
	for (int i = 0; i<times; i++)
	{
		gcdRepeative = euclidRepeative(num1, num2);
	}
	finish = clock();

	duration = (double)(finish - start) / CLOCKS_PER_SEC;

	printf("         반복을 이용한 %d와 %d의 최대공약수는 %d입니다.\n", num1, num2, gcdRepeative);
	printf("걸린 시간은 %lf초 입니다.\n", duration);

	return 0;
}

void VtestEuclid()
{
	clock_t start, finish;
	double duration;
	int gcdRecursive = 0, gcdRepeative = 0, num3 = 0, num4 = 0, times = 100000;
	srand(time(NULL));

	num3 = rand() % 1000 + 1000;
	num4 = rand() % 100 + 10;

	printf("\n안녕하세요. void형 데이터 타입 테스트함수 입니다.\n");

	start = clock();
	for (int i = 0; i < times; i++)
	{
		gcdRecursive = euclidRecursive(num3, num4);
	}
	finish = clock();

	duration = (double)(finish - start) / CLOCKS_PER_SEC;

	printf("재귀함수 호출을 이용한 %d와 %d의 최대공약수는 %d입니다.\n", num3, num4, gcdRecursive);
	printf("걸린 시간은 %lf초 입니다.\n", duration);

	start = clock();
	for (int i = 0; i < times; i++)
	{
		gcdRepeative = euclidRepeative(num3, num4);
	}
	finish = clock();

	duration = (double)(finish - start) / CLOCKS_PER_SEC;

	printf("         반복을 이용한 %d와 %d의 최대공약수는 %d입니다.\n", num3, num4, gcdRepeative);
	printf("걸린 시간은 %lf초 입니다.\n", duration);
}