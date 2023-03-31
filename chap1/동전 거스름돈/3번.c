#include <stdio.h>

int main() {
    int change, count500, count100, count50, count10;

    // 거스름돈을 입력받는다.
    printf("거스름돈을 입력하세요: ");
    scanf("%d", &change);

    // 500원짜리 동전 개수를 계산한다.
    count500 = change / 500;
    change = change % 500;

    // 100원짜리 동전 개수를 계산한다.
    count100 = change / 100;
    change = change % 100;

    // 50원짜리 동전 개수를 계산한다.
    count50 = change / 50;
    change = change % 50;

    // 10원짜리 동전 개수를 계산한다.
    count10 = change / 10;
    change = change % 10;

    // 거스름돈과 동전 개수를 출력한다.
    printf("500원짜리 동전 개수: %d\n", count500);
    printf("100원짜리 동전 개수: %d\n", count100);
    printf("50원짜리 동전 개수: %d\n", count50);
    printf("10원짜리 동전 개수: %d\n", count10);
    printf("총 동전 개수: %d\n", count500 + count100 + count50 + count10);

    return 0;
}
