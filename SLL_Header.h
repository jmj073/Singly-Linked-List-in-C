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
//��� ����
Node* SLL_GetNodeAt(Node* Head, int Index);
//��� �ε����� ������ ����
void SLL_RemoveNodeIndex(Node** Head, int Index);
//��� �߰�
void SLL_AppendNode(Node** Head, Node* NewNode);
//��� ������ �߰�
void SLL_CreateNode2(Node** Head, ElementType NewData);
//��� ����
int SLL_GetNodeCount(Node* Head);
//��� ��� ����
void SLL_DestroyAllNodes(Node** Head);
#endif