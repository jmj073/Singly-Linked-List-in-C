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

//��� �Ҹ�
//void SLL_DestroyNode(Node* Node) {
//
//}

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
