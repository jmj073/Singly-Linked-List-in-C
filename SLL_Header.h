#ifndef SLL_H
#define SLL_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagNode {
	ElementType Data;
	struct tagNode* NextNode;
} Node;

Node* SLL_CreateNode(ElementType NewData);
//void SLL_DestroyNode(Node* Node);
void SLL_AppendNode(Node** Head, Node* NewNode);

void SLL_CreateNode2(Node** Head, ElementType NewData);
//void SLL_DestroyNode2(Node* Node);

#endif