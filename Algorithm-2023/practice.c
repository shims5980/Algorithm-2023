/*	����: �˰���
	�̸�: �ɱ���
	�й�: 201910852
	�ǽ���¥: 2023.
	�ǽ�����: 	*/
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
		printf("%c: %3dȸ\n", i + 65, count[i]);
		fprintf(fp, "%c\t%d\n", i + 65, count[i]);
	}
	fclose(fp);

	return 0;
}