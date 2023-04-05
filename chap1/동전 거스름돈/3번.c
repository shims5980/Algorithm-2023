/*	과목: 알고리즘
    이름: 심기윤
    학번: 201910852
    실습날짜: 2023.03.29
    실습내용: 동전 거스름돈	*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
    int C500;
    int C100;
    int C50;
    int C10;
}Coin;

int calcChange(int change, Coin *c);
void test_calcChange();

int main() {

    test_calcChange();

    return 0;
}

void test_calcChange()
{
    int changee = 0, count = 0;
    Coin coins;

    // 거스름돈을 입력받는다.
    printf("거스름돈을 입력하세요: ");
    scanf("%d", &changee);

    count = calcChange(changee, &coins);

    printf("500원짜리 동전 개수: %d\n", coins.C500);
    printf("100원짜리 동전 개수: %d\n", coins.C100);
    printf("50원짜리 동전 개수: %d\n", coins.C50);
    printf("10원짜리 동전 개수: %d\n", coins.C10);
    printf("총 동전 개수: %d\n", count);
}

int calcChange(int change, Coin *c)
{
    int count;

    // 500원짜리 동전 개수를 계산한다.
    c->C500 = change / 500;
    change = change % 500;

    // 100원짜리 동전 개수를 계산한다.
    c->C100 = change / 100;
    change = change % 100;

    // 50원짜리 동전 개수를 계산한다.
    c->C50 = change / 50;
    change = change % 50;

    // 10원짜리 동전 개수를 계산한다.
    c->C10 = change / 10;
    change = change % 10;

    count = c->C500 + c->C100 + c->C50 + c->C10;
    return count;
}
