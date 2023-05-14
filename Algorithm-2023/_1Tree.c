#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "_1tree.h"

Node* createNode(int value)
{
	//Node* new = (Node*)malloc(sizeof(Node));
	Node* pNode = (Node*)malloc(sizeof(Node));
	//new->value = value;
	pNode->value = value;
	pNode->left = NULL;
	pNode->right = NULL;

	return pNode;
}

static Node* connectChild(Node* parent, Node* left, Node* right)
{
	if (parent == NULL)
		return NULL;
	parent->left = left;
	parent->right = right;

	return parent;
}

Node* makeTree()
{
	Node* pRoot = NULL;
	Node* tLeft = NULL;
	Node* tRight = NULL;

	pRoot = createNode(100);
	tLeft = createNode(200);
	tRight = createNode(300);

	connectChild(pRoot, tLeft, tRight);

	connectChild(tRight, createNode(400), createNode(500));


	return pRoot;
}

void printTree(Node* root)
{
	if (root == NULL)
		return;

	printf("Node: %d, ", root->value);
	printTree(root->left);
	printTree(root->right);
}

//입력: 찾아야할 루트, 찾을 값 / 출력: 찾을 값이 있는 노드
Node* findNode(Node* root, int value)
{
	//1. 종료조건: 넘겨준 값이 NULL이면 NULL반환
	if (root == NULL)	return NULL;

	Node* findLeft = NULL;
	Node* findRight = NULL;

	//2.루트 값이 찾을 값과 동일하면 루트 반환
	if (root->value == value) 
		return root;
	else
	{
		//3.일치하지 않으면 왼쪽 오른쪽에 대해 재귀 호출
		findLeft = findNode(root->left, value);
		findRight = findNode(root->right, value);

		//4.왼쪽과 오른쪽 중에 NULL이 반환되지 않으면 찾을 값이 있다
		if (findLeft != NULL)
			return findLeft;
		else if (findRight != NULL)
			return findRight;
	}
}

//입력: 추가할 노드를 넣을 위치, 추가할 노드 / 출력: where
Node* insertLeftNode(Node* where, Node* new_node) 
{
	//1.where이 NULL이면 바로 NULL 반환
	if (where == NULL)	return NULL;

	Node* priv = NULL;

	//2. where->left자리에 new_node, new_node자리에 where->left
	priv = where->left;
	where->left = new_node;
	new_node->left = priv;

	return where;
}

//입력: 추가할 노드를 넣을 위치, 추가할 노드 / 출력: where
Node* insertRightNode(Node* where, Node* new_node) 
{
	//1.where이 NULL이면 바로 NULL 반환
	if (where == NULL)	return NULL;

	Node* priv = NULL;

	//2. where->right자리에 new_node, new_node자리에 where->right
	priv = where->right;
	where->right = new_node;
	new_node->right = priv;

	return where;
}