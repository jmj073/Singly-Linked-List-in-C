#define _CRT_SECURE_NO_WARNINGS
#include "SLL_Header.h"

void main(void) {
	//변수 선언
	int i;
	Node* List = NULL;
	Node* NewNode = NULL;
	Node* Current = NULL;
	ElementType iData;

	//데이터 입력
	printf("99를 입력하면 멈춥니다.\n");
	while (1) {
		scanf("%d", &iData);
		if (iData == 99) break;
		NewNode = SLL_CreateNode(iData);
		SLL_AppendNode(&List, NewNode);
	}

	//데이터 출력
	Current = List;
	for (i = 0; Current->NextNode != NULL; i++) {
		printf("%2d: %2d\n", i, Current->Data);
		Current = Current->NextNode;
	}
	printf("%2d: %2d\n\n\n", i, Current->Data);
	//노드 총 개수
	printf("!!!%d\n", SLL_GetNodeCount(List));
	//노드 삭제
	SLL_RemoveNodeIndex(&List, 6);
	Current = SLL_GetNodeAt(List, 2);
	SLL_InsertBefore(&List, Current, SLL_CreateNode(9999));
	//데이터 출력
	Current = List;
	for (i = 0; Current->NextNode != NULL; i++) {
		printf("%2d: %2d\n", i, Current->Data);
		Current = Current->NextNode;
	}
	printf("%2d: %2d\n", i, Current->Data);
	//노드 총 개수
	printf("!!!%d\n", SLL_GetNodeCount(List));
	SLL_DestroyAllNodes(&List);
}