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

//��� �ε����� ������ ����
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