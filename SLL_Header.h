#ifndef SLL_H
#define SLL_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagNode {
	ElementType Data;
	struct tagNode* NextNode;
} Node;
//노드 만들기
Node* SLL_CreateNode(ElementType NewData);
//노드 인덱스로 접근후 삭제
int SLL_RemoveNodeIndex(Node** Head, unsigned short Index);
//노드 추가
void SLL_AppendNode(Node** Head, Node* NewNode);
//노드 만들기와 추가
void SLL_CreateNode2(Node** Head, ElementType NewData);
//모든 노드 삭제
void SLL_DestroyAllNodes(Node** Head);

#endif