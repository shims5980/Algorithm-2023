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

	printf("�ȳ��ϼ���. �׽�Ʈ�մϴ�.\n");

	start = clock();
	for (int i=0;i<times;i++)
	{
		gcdRecursive = euclidRecursive(num1, num2);
	}
	finish = clock();

	duration = (double)(finish - start) / CLOCKS_PER_SEC;

	printf("����Լ� ȣ���� �̿��� %d�� %d�� �ִ������� %d�Դϴ�.\n", num1, num2, gcdRecursive);
	printf("�ɸ� �ð��� %lf�� �Դϴ�.\n", duration);

	start = clock();
	for (int i = 0; i<times; i++)
	{
		gcdRepeative = euclidRepeative(num1, num2);
	}
	finish = clock();

	duration = (double)(finish - start) / CLOCKS_PER_SEC;

	printf("         �ݺ��� �̿��� %d�� %d�� �ִ������� %d�Դϴ�.\n", num1, num2, gcdRepeative);
	printf("�ɸ� �ð��� %lf�� �Դϴ�.\n", duration);

	return 0;
}