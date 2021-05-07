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

//노드 색인
Node* SLL_GetNodeAt(Node* Head, int Index) {
	Node* Current = Head;
	while (Current != NULL && (--Index) >= 0)
		Current = Current->NextNode;

	return Current;
}

//노드 주소로 삭제
void SLL_RemoveNode(Node** Head, Node* Remove) {
	if (*Head == Remove)
		*Head = Remove->NextNode;
	else {
		Node* Current = *Head;
		while (Current != NULL && Current->NextNode != Remove)
			Current = Current->NextNode;
		if (Current != NULL)
			Current->NextNode = Remove->NextNode;
	}
	free(Remove);
}

//노드 인덱스로 접근후 삭제
void SLL_RemoveNodeIndex(Node** Head, int Index) {
	Node* Remove = SLL_GetNodeAt(*Head, Index);
	if (*Head == Remove) {
		*Head = Remove->NextNode;
	}
	else {
		Node* Current = *Head;
		while (Current != NULL && Current->NextNode != Remove)
			Current = Current->NextNode;
		if(Current != NULL) 
			Current->NextNode = Remove->NextNode;
	}
	free(Remove);
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

//노드 개수
int SLL_GetNodeCount(Node* Head) {
	int i;
	for (i = 0; Head != NULL; i++)
		Head = Head->NextNode;
	return i;
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

