#pragma once

typedef struct _node {
	int value;
	struct _node * left;
	struct _node* right;
}Node;

extern Node* makeTree();
extern void printTree(Node* root);
extern Node* findNode(Node* root, int value);
extern Node* insertLeftNode(Node* where, Node* new_node);
extern Node* insertRightNode(Node* where, Node* new_node);
extern Node* createNode(int value);
