#ifndef SLL_H
#define SLL_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagNode {
	ElementType Data;
	struct tagNode* NextNode;
} Node;
//��� �����
Node* SLL_CreateNode(ElementType NewData);
//��� �ε����� ������ ����
int SLL_RemoveNodeIndex(Node** Head, unsigned short Index);
//��� �߰�
void SLL_AppendNode(Node** Head, Node* NewNode);
//��� ������ �߰�
void SLL_CreateNode2(Node** Head, ElementType NewData);
//��� ��� ����
void SLL_DestroyAllNodes(Node** Head);

#endif