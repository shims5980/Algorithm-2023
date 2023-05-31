/*	과목: 알고리즘
	이름: 심기윤
	학번: 201910852
	실습날짜: 2023.
	실습내용: 	0, 1 배낭문제 (KnapSack)*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int knapSack(int size, int n, int w[], int v[]);
int maxi(int a, int b);
void test();
void test2();

int main(void)
{
	
	//test();
	test2();

	return 0;
}

int knapSack(int size, int n, int w[], int v[])
{
	int i, wi;
	int k[20][20] = { {0}, };

	for (i = 0; i < n; i++)
		k[i][0] = 0;
	for (i = 0; i < size; i++)
		k[0][i] = 0;

	for (i = 1; i <= n; i++)
	{
		for (wi = 1; wi <= size; wi++)
		{
			if (w[i] > wi)
				k[i][wi] = k[i - 1][wi];
			else
				k[i][wi] = maxi(k[i - 1][wi], (k[i - 1][wi - w[i]] + v[i]));
		}
	}

	for (i = 0; i <= n; i++)
	{
		for (wi = 0; wi <= size; wi++)
			printf("%4d", k[i][wi]);
		printf("\n");
	}

	return k[n][size];
}
int maxi(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
void test()
{
	int num[8] = {0};
	int w[8] = {0};
	int v[8] = {0};
	int i = 0;
	int max = 0, size;

	FILE* fp = fopen("D:\items.txt", "r");

	for (i = 0; i < 4; i++)
		fscanf(fp, "%d\t%d\t%d\n", &num[i], &w[i+1], &v[i+1]);

	fclose(fp);

	printf("배낭의 무게를 입력하시오: ");
	scanf("%d", &size);

	max = knapSack(size, 4, w, v);

	printf("최대 이익은 %d원\n", max);
}
void test2()
{
	int num[20] = { 0 };
	int w[20] = { 0 };
	int v[20] = { 0 };
	int i = 0;
	int max = 0, size;

	FILE* fp = fopen("D:\items.txt", "r");

	while (fscanf(fp, "%d\t%d\t%d\n", &num[i], &w[i + 1], &v[i + 1]) != EOF)
		i++;

	fclose(fp);

	printf("배낭의 무게를 입력하시오: ");
	scanf("%d", &size);

	max = knapSack(size, i, w, v);

	printf("최대 이익은 %d원\n", max);
}