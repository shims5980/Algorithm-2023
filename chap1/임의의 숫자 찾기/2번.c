#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findRandomNumber(int array[], int userWant);
void test_findRandomNumber();

int main() {
    
    test_findRandomNumber();

    return 0;
}

void test_findRandomNumber()
{
    int cards[] = { 45, 20, 60, 35, 10, 90, 85, 75, 25 };
    int target = 85, index;


    index = findRandomNumber(cards, target);

    if (index == -1)
        printf("찾고자 하는 값이 cards배열안에 없음\n");
    else
        printf("%d가 cards[%d]에 있음\n", target, index);
}

int findRandomNumber(int array[], int wantFind)
{
    int i, index = -1;

    // 배열을 처음부터 끝까지 탐색하며 원하는 값이 있는 인덱스를 찾음
    for (i = 0; i < 9; i++) {
        if (array[i] == wantFind) {
            index = i;
            break;
        }
    }

    //원하는 값이 있는 인덱스를 반환
    return index;
}
