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

//�Է�: ã�ƾ��� ��Ʈ, ã�� �� / ���: ã�� ���� �ִ� ���
Node* findNode(Node* root, int value)
{
	//1. ��������: �Ѱ��� ���� NULL�̸� NULL��ȯ
	if (root == NULL)	return NULL;

	Node* findLeft = NULL;
	Node* findRight = NULL;

	//2.��Ʈ ���� ã�� ���� �����ϸ� ��Ʈ ��ȯ
	if (root->value == value) 
		return root;
	else
	{
		//3.��ġ���� ������ ���� �����ʿ� ���� ��� ȣ��
		findLeft = findNode(root->left, value);
		findRight = findNode(root->right, value);

		//4.���ʰ� ������ �߿� NULL�� ��ȯ���� ������ ã�� ���� �ִ�
		if (findLeft != NULL)
			return findLeft;
		else if (findRight != NULL)
			return findRight;
	}
}

//�Է�: �߰��� ��带 ���� ��ġ, �߰��� ��� / ���: where
Node* insertLeftNode(Node* where, Node* new_node) 
{
	//1.where�� NULL�̸� �ٷ� NULL ��ȯ
	if (where == NULL)	return NULL;

	Node* priv = NULL;

	//2. where->left�ڸ��� new_node, new_node�ڸ��� where->left
	priv = where->left;
	where->left = new_node;
	new_node->left = priv;

	return where;
}

//�Է�: �߰��� ��带 ���� ��ġ, �߰��� ��� / ���: where
Node* insertRightNode(Node* where, Node* new_node) 
{
	//1.where�� NULL�̸� �ٷ� NULL ��ȯ
	if (where == NULL)	return NULL;

	Node* priv = NULL;

	//2. where->right�ڸ��� new_node, new_node�ڸ��� where->right
	priv = where->right;
	where->right = new_node;
	new_node->right = priv;

	return where;
}