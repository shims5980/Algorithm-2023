#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#include "_1tree.h"

void test_tree1()
{
	//TC1. �̸� ������ ���� ã�� ������ ��ġ�� ��� �߰��ϱ�
	for (int i = 0; i < 30; i++) printf("*");
	printf("Test1");
	for (int i = 0; i < 30; i++) printf("*");
	printf("\n\n");

	Node* root = makeTree();
	Node* find = NULL, * make = NULL;
	int k = 300;

	printTree(root);

	//findNode
	find = findNode(root, k);
	if (find == NULL)
		printf("\n%d���� ��带 ã�� ���߽��ϴ�.\n", k);
	else
		printf("\n%d���� ��带 ã�ҽ��ϴ�.\n", k);

	//insertNode
	make = createNode(600);
	insertLeftNode(root, make);

	printTree(root);

	_getch();
}

void test_tree2()
{
	//TC2. ����ڿ��� ã�� ���� �ް� �߰��� ����� ��ġ�� �����ޱ�
	printf("\n\n");
	for (int i = 0; i < 30; i++) printf("*");
	printf("Test2");
	for (int i = 0; i < 30; i++) printf("*");
	printf("\n\n");

	Node* root = makeTree();
	Node* find = NULL, * make = NULL;
	int k, loc;

	printTree(root);

	//findNode
	printf("\nã�� ����� ���� �Է�: ");
	scanf("%d", &k);
	find = findNode(root, k);
	if (find == NULL)
	{
		printf("%d���� ��带 ã�� ���߽��ϴ�.\n", k);
		return 0;
	}
	else
		printf("%d���� ��带 ã�ҽ��ϴ�.\n", k);

	//insetNode
	make = createNode(600);
	printf("%d���� ��忡 �߰��� ��� ���� ����(����: 0, ������: 1): ", k);
	scanf("%d", &loc);
	if (loc == 0)
		insertLeftNode(find, make);
	else if (loc == 1)
		insertRightNode(find, make);
	else
		return 0;

	printTree(root);

	_getch();
}