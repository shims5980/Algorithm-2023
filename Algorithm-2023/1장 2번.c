/*	����: �˰���
	�̸�: �ɱ���
	�й�: 201910852
	�ǽ���¥: 2023.03.29
	�ǽ�����: ������ ���� ã��	*/
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
        printf("ã���� �ϴ� ���� cards�迭�ȿ� ����\n");
    else
        printf("%d�� cards[%d]�� ����\n", target, index);
}

int findRandomNumber(int array[], int wantFind)
{
    int i, index = -1;

    // �迭�� ó������ ������ Ž���ϸ� ���ϴ� ���� �ִ� �ε����� ã��
    for (i = 0; i < 9; i++) {
        if (array[i] == wantFind) {
            index = i;
            break;
        }
    }

    //���ϴ� ���� �ִ� �ε����� ��ȯ
    return index;
}