#include <stdio.h>
#include "euclid.h"

int testEuclid()
{
	int gcd = 0;
	printf("�ȳ��ϼ���. �׽�Ʈ�մϴ�.\n");

	gcd = euclidRecursive(24, 12);

	printf("%d�� %d�� �ִ������� %d�Դϴ�.\n", 24, 12, gcd);


	return 0;
}