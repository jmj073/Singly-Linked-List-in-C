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

//노드 소멸
//void SLL_DestroyNode(Node* Node) {
//
//}

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
