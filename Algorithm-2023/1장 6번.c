/*	과목: 알고리즘
	이름: 심기윤
	학번: 201910852
	실습날짜: 2023.03.29
	실습내용: 가짜 동전 찾기	*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
//프로토타입: int findFakeCoin(int coin[], int coinNum)
int findFakeCoin(int coin[], int coinNum);
//
int main(void)
{
	int arr[1024] = { 0 }, i, r, coin;
	srand(time(NULL));
	for (i = 0; i < 1024; i++)
		arr[i] = 1;
	r = rand() % 1024;
	arr[r] = 0;

	coin = findFakeCoin(arr, 1024);

	printf("%d\t%d", coin, r);

	return 0;
}

int findFakeCoin(int coin[], int coinNum)
{
	//1. 동전들의 무게의 합을 저장할 변수를 선언한다.
	int coinSum1 = 0, coinSum2 = 0, count = coinNum, fakeCoin = 0;
	
	//2. 동전 더미 배열을 받는다.
	//3. 동전 더미를 반으로 나누고 반으로 나눈 동전들의 무게를 재본 후 서로 비교하여 가벼운 것을 찾아낸다.
	while (count >= 2)
	{
		for (int i = 0; i <= (count / 2); i++, fakeCoin++)
		{
			coinSum1 += coin[fakeCoin];
			coinSum2 += coin[fakeCoin + coinNum / 2];
		}
		if (coinSum1 < coinSum2)
		{
			coinNum /= 2;
			count /= 2;
		}
		else
		{
			fakeCoin = coinNum / 2;
			count /= 2;
			coinNum /= 2;
		}
	}
	//4. 3을 반복하여 마지막에 남은 가짜 동전을 반환한다.
	return fakeCoin;
}
