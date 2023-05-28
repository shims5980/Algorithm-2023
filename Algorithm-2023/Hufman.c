/*	과목: 알고리즘
	이름: 심기윤
	학번: 201910852
	제출날짜: 2023.5.28
	실습내용: 허프만 압축코드*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX_HEAP_NODE 200

void error(char str[])
{
	printf("%s", str);
	exit(1);
}

typedef int HNode;
#define Key(n) (n)

HNode heap[MAX_HEAP_NODE];
int heap_size;

#define Parent(i) (heap[i/2])
#define Left(i) (heap[i*2])
#define Right(i) (heap[i*2+1])

void init_heap() { heap_size = 0; }
int is_empty_heap() { return heap_size == 0; }
int is_full_heap() { return (heap_size == MAX_HEAP_NODE - 1); }
HNode find_heap() { return heap[1]; }

void insert_heap(HNode n);
HNode delete_heap();
void make_tree(int freq[], int n);
void fileInputToStats();
void test();

int main(void)
{
	test();
	
    return 0;
}

void insert_heap(HNode n)
{
	int i;
	if (is_full_heap()) return;
	i = ++(heap_size);
	while (i != 1 && Key(n) < Key(Parent(i)))
	{
		heap[i] = Parent(i);
		i /= 2;
	}
	heap[i] = n;
}
HNode delete_heap()
{
	HNode hroot, last;
	int parent = 1, child = 2;

	if (is_empty_heap())
		error("힙 트리 공백 에러");

	hroot = heap[1];
	last = heap[heap_size--];
	while (child <= heap_size)
	{
		if (child < heap_size && Key(Left(parent))>Key(Right(parent)))
			child++;
		if (Key(last) <= Key(heap[child]))
			break;
		heap[parent] = heap[child];
		parent = child;
		child *= 2;
	}
	heap[parent] = last;
	return hroot;
}
void make_tree(int freq[], int n)
{
	HNode e1, e2;
	int i;

	init_heap();
	for (i = 0; i < n; i++)
		insert_heap(freq[i]);

	for (i = 1; i < n; i++)
	{
		e1 = delete_heap();
		e2 = delete_heap();

		insert_heap(Key(e1) + Key(e2));
		printf(" (%d + %d)\n", Key(e1), Key(e2));
	}
}
void fileInputToStats()
{
	char read;
	int count[60] = { 0 }, word;
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
		fprintf(fp, "%c\t%d\n", i + 65, count[i]);
	}
	fclose(fp);
}
void test()
{
	char lable[53] = { NULL };
	int freq[53];
	int size = sizeof(freq) / sizeof(freq[0]);
	int i = 0;

	fileInputToStats();

	FILE* fp = fopen("D:\stats.txt", "r");
	while (fscanf(fp, "%c\t%d\n", &lable[i], &freq[i]) != EOF)
		i++;
	fclose(fp);

	for (i = 0; i < 52; i++)
		printf("%c\t%d\n", lable[i], freq[i]);

	make_tree(freq, size);
}