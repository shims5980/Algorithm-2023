/*	����: �˰���
	�̸�: �ɱ���
	�й�: 201910852
	�ǽ���¥: 2023.03.29
	�ǽ�����: ���� ū �� ã��	*/
#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

	//������Ÿ��: int findMaxNumber(int numArray[], int count)
int findMaxNumber(int numArray[], int count);
int test_findMaxNumber();

int main(void)
{
	test_findMaxNumber();
}

int findMaxNumber(int numArray[], int count)
{
	//1. ���� ū ���� ������ ������ �����ϰ� �ʱⰪ�� ���� ù ī��� �Ѵ�.
	int max = numArray[0], i;

	//3. ������ ī�忡 ���� 2�� �ݺ��Ѵ�.
	for (i = 1; i < count; i++)
	{
		//2. ù ��°�� �� ��°�� �� �� �� ū ���� ������ ������ �����Ѵ�.
		if (max > numArray[i])
			max = max;
		else
			max = numArray[i];
	}

	//4. ���� ū ���� ��ȯ�Ѵ�.
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
	printf("�־��� �� �� ���� ū ���� %d�Դϴ�.\n", max);

	return 0;
}