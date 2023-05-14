#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#include "_1tree.h"

void test_tree1()
{
	//TC1. 미리 지정한 값을 찾고 지정된 위치에 노드 추가하기
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
		printf("\n%d값의 노드를 찾지 못했습니다.\n", k);
	else
		printf("\n%d값의 노드를 찾았습니다.\n", k);

	//insertNode
	make = createNode(600);
	insertLeftNode(root, make);

	printTree(root);

	_getch();
}

void test_tree2()
{
	//TC2. 사용자에게 찾을 값을 받고 추가할 노드의 위치도 지정받기
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
	printf("\n찾을 노드의 값을 입력: ");
	scanf("%d", &k);
	find = findNode(root, k);
	if (find == NULL)
	{
		printf("%d값의 노드를 찾지 못했습니다.\n", k);
		return 0;
	}
	else
		printf("%d값의 노드를 찾았습니다.\n", k);

	//insetNode
	make = createNode(600);
	printf("%d값인 노드에 추가할 노드 방향 선택(왼쪽: 0, 오른쪽: 1): ", k);
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
