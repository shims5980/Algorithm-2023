/*	과목: 알고리즘
	이름: 심기윤
	학번: 201910852
	실습날짜: 2023.
	실습내용: 	*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char read;
	int count[59] = { 0 }, word;
	FILE* fp = fopen("D:\input.txt", "r");
	while (fscanf(fp, "%c", &read) != EOF)
	{
		word = (int)read - 65;
		count[word]++;
	}
	fclose(fp);
	fp = fopen("D:\stats.txt", "w");
	for (int i = 0; i < 58; i++)
	{
		if (i >= 26 && i <= 31)
			continue;
		printf("%c: %3d회\n", i + 65, count[i]);
		fprintf(fp, "%c\t%d\n", i + 65, count[i]);
	}
	fclose(fp);

	return 0;
}