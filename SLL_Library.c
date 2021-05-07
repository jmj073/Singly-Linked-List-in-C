#include "SLL_Header.h"

//��� �����
Node* SLL_CreateNode(ElementType NewData) {
	//��� ����
	Node* NewNode = (Node*)malloc(sizeof(Node));
	//��� �ʱ�ȭ
	NewNode->Data = NewData;
	NewNode->NextNode = NULL;
	//�ּ� ��ȯ
	return NewNode;
}

//��� ����
Node* SLL_GetNodeAt(Node* Head, int Index) {
	Node* Current = Head;
	while (Current != NULL && (--Index) >= 0)
		Current = Current->NextNode;

	return Current;
}

//��� �ּҷ� ����
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

//��� �ε����� ������ ����
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

//��带 ����Ʈ�� �߰�
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

// ��� ������ �߰�
void SLL_CreateNode2(Node** Head, ElementType NewData) {
	//��� ����
	Node* NewNode = (Node*)malloc(sizeof(Node));
	//��� �ʱ�ȭ
	NewNode->Data = NewData;
	NewNode->NextNode = NULL;
	//��� �߰�
	SLL_AppendNode(Head, NewNode);
}

//��� ����
int SLL_GetNodeCount(Node* Head) {
	int i;
	for (i = 0; Head != NULL; i++)
		Head = Head->NextNode;
	return i;
}

//��� ��� ����
void SLL_DestroyAllNodes(Node** Head) {
	Node* Current;
	while (*Head != NULL) {
		Current = (*Head)->NextNode;
		free(*Head);
		*Head = Current;
	}
	//�ʱ�ȭ
	Current = NULL, *Head = NULL;
}

