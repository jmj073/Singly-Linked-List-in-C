#include "SLL_Header.h"

//노드 만들기
Node* SLL_CreateNode(ElementType NewData) {
	//노드 생성
	Node* NewNode = (Node*)malloc(sizeof(Node));
	//노드 초기화
	NewNode->Data = NewData;
	NewNode->NextNode = NULL;
	//주소 반환
	return NewNode;
}

//노드 인덱스로 접근후 삭제
int SLL_RemoveNodeIndex(Node** Head, unsigned short Index) {
	Node* Keep;
	if (Index == 0) {
		Keep = *Head;
		*Head = (*Head)->NextNode;
		free(Keep);
		return 1;
	}
	Node* Current = *Head;
	for (int i = 1; i < Index; i++) {
		if (Current->NextNode->NextNode == NULL) return -1;
		Current = Current->NextNode;
	}
	Keep = Current->NextNode;
	Current->NextNode = Current->NextNode->NextNode;
	free(Keep);
	return 1;
}

//노드를 리스트에 추가
void SLL_AppendNode(Node** Head, Node* NewNode) {
	if ( (*Head) == NULL) {
		*Head = NewNode;
	}
	else {
		Node* Current = *Head;
		while (Current->NextNode != NULL) {
			Current = Current->NextNode;
		}
		Current->NextNode = NewNode;
	}
}

// 노드 만들기와 추가
void SLL_CreateNode2(Node** Head, ElementType NewData) {
	//노드 생성
	Node* NewNode = (Node*)malloc(sizeof(Node));
	//노드 초기화
	NewNode->Data = NewData;
	NewNode->NextNode = NULL;
	//노드 추가
	SLL_AppendNode(Head, NewNode);
}

//모든 노드 삭제
void SLL_DestroyAllNodes(Node** Head) {
	Node* Current;
	while (*Head != NULL) {
		Current = (*Head)->NextNode;
		free(*Head);
		*Head = Current;
	}
	//초기화
	Current = NULL, *Head = NULL;
}