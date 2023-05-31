#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void test();
void test2();

int main(void)
{
	char name[20];
	int a, b;
	FILE* fp = fopen("D:\ex.txt", "r");

	fscanf(fp, "%s\t%d\t%d\n", name, &a, &b);
	printf("%s, %d ,%d", name, a, b);

	fclose(fp);

	return 0;
}

void test()
{
	while(1)
	{
		printf("hihi\n");
		if (_getch())
			break;
	}
}

void test2()
{
	char name;

	scanf(" %c", &name);

	if (name == '0')
		printf("이게되네");
	else
		printf("시벌");
}