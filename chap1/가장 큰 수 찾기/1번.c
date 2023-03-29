/*	과목: 알고리즘
	이름: 심기윤
	학번: 201910852
	실습날짜: 2023.03.29
	실습내용: 가장 큰 수 찾기	*/
#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

//프로토타입: int findMaxNumber(int numArray[], int count)
int findMaxNumber(int numArray[], int count);
int test_findMaxNumber();

int main(void)
{
	test_findMaxNumber();
}

int findMaxNumber(int numArray[], int count)
{
	//1. 가장 큰 값을 저장할 변수를 선언하고 초기값은 제일 첫 카드로 한다.
	int max = numArray[0], i;

	//3. 나머지 카드에 대해 2를 반복한다.
	for (i = 1; i < count; i++)
	{
		//2. 첫 번째와 두 번째를 비교 후 더 큰 값을 선언한 변수에 저장한다.
		if (max > numArray[i])
			max = max;
		else
			max = numArray[i];
	}

	//4. 가장 큰 수를 반환한다.
	return max;
}

int test_findMaxNumber()
{
	srand(time(NULL));
	int numList[10] = { 0 }, max = 0, i, r;

	for (i = 0; i < 10; i++)
	{
		r = rand() % 100;
		numList[i] = r;
	}

	max = findMaxNumber(numList, 10);
	printf("주어진 수 중 가장 큰 수는 %d입니다.\n", max);

	return 0;
}
