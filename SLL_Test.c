#define _CRT_SECURE_NO_WARNINGS
#include "SLL_Header.h"

void main(void) {
	//���� ����
	int i;
	Node* List = NULL;
	Node* NewNode = NULL;
	Node* Current = NULL;
	ElementType iData;

	//������ �Է�
	printf("99�� �Է��ϸ� ����ϴ�.\n");
	while (1) {
		scanf("%d", &iData);
		if (iData == 99) break;
		NewNode = SLL_CreateNode(iData);
		SLL_AppendNode(&List, NewNode);
	}

	//������ ���
	Current = List;
	for (i = 0; Current->NextNode != NULL; i++) {
		printf("%2d: %2d\n", i, Current->Data);
		Current = Current->NextNode;
	}
	printf("%2d: %2d\n\n\n", i, Current->Data);
	//��� �� ����
	printf("!!!%d\n", SLL_GetNodeCount(List));
	//��� ����
	SLL_RemoveNodeIndex(&List, 6);
	Current = SLL_GetNodeAt(List, 2);
	SLL_InsertBefore(&List, Current, SLL_CreateNode(9999));
	//������ ���
	Current = List;
	for (i = 0; Current->NextNode != NULL; i++) {
		printf("%2d: %2d\n", i, Current->Data);
		Current = Current->NextNode;
	}
	printf("%2d: %2d\n", i, Current->Data);
	//��� �� ����
	printf("!!!%d\n", SLL_GetNodeCount(List));
	SLL_DestroyAllNodes(&List);
}