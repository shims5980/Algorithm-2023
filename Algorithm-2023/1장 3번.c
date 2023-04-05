/*	����: �˰���
    �̸�: �ɱ���
    �й�: 201910852
    �ǽ���¥: 2023.03.29
    �ǽ�����: ���� �Ž�����	*/
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

    // �Ž������� �Է¹޴´�.
    printf("�Ž������� �Է��ϼ���: ");
    scanf("%d", &changee);

    count = calcChange(changee, &coins);

    printf("500��¥�� ���� ����: %d\n", coins.C500);
    printf("100��¥�� ���� ����: %d\n", coins.C100);
    printf("50��¥�� ���� ����: %d\n", coins.C50);
    printf("10��¥�� ���� ����: %d\n", coins.C10);
    printf("�� ���� ����: %d\n", count);
}

int calcChange(int change, Coin *c)
{
    int count;

    // 500��¥�� ���� ������ ����Ѵ�.
    c->C500 = change / 500;
    change = change % 500;

    // 100��¥�� ���� ������ ����Ѵ�.
    c->C100 = change / 100;
    change = change % 100;

    // 50��¥�� ���� ������ ����Ѵ�.
    c->C50 = change / 50;
    change = change % 50;

    // 10��¥�� ���� ������ ����Ѵ�.
    c->C10 = change / 10;
    change = change % 10;

    count = c->C500 + c->C100 + c->C50 + c->C10;
    return count;
}