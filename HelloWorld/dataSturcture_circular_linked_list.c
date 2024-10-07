// 원형연결리스트 노드 삽입,삭제 프로그램
// 연결리스트의 마지막 노드의 NULL 인데, 
// 이를 첫번째 노드를 가리키게 하여 구조를 원형으로 만듦.
// 공백리스트에 처음으로 노드를 삽입할 경우에는 자기 자신을 가리킴
// 추가로 노드가 삽입되는 경우에는 첫번째 노드 가리킴
//#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
	int data;
	struct ListNode* link;
}listNode;

typedef struct {
	listNode* head;
}linkedList_h;

linkedList_h* createLinkedList_h(void) {
	linkedList_h* H; // 헤드생성(포인터:8바이트)
	H = (linkedList_h*)malloc(sizeof(linkedList_h)); 
	H->head = NULL; 
	return H;
}

void addNode(linkedList_h* H, int x) {
	// 마지막노드 -> 첫번째 노드 
	// 첫번째 위치에 새로운 노드 삽입되면, 마지막노드 링크값 수정해야함
	listNode* tempNode; // 마지막노드 링크값 
	listNode* NewNode;

	NewNode = (listNode*)malloc(sizeof(listNode));
	NewNode->data = x;
	NewNode->link = NULL;

	if (H->head == NULL) {
		// head 값 NewNode 가리키게 함
		H->head = NewNode;
		
		// *** 첫번째 노드가 자기자신을 가리키게 해서 원형구조 만듦
		NewNode->link = NewNode;
		return;
	}

	// 공백이 아닌 경우 실행
	tempNode = H->head;
	while (tempNode->link != H->head)tempNode = tempNode->link;
	NewNode->link = tempNode->link;
	tempNode->link = NewNode;
	H->head = NewNode;
}

// 한개 노드 중간에 삽입
void addMiddleNode(linkedList_h* H, int itdata, int adddata) {
	
	listNode* prevNode;
	prevNode = H->head;

	while (prevNode->data != itdata) {
		prevNode = prevNode->link;
	}

	listNode* NewNode;
	NewNode = (listNode*)malloc(sizeof(listNode));
	NewNode->data = adddata;
	NewNode -> link = NULL; 

	NewNode->link = prevNode->link;
	prevNode->link = NewNode;
	return;
}

void deleteCircularNode(linkedList_h* H, int deldata) {

	listNode* prevNode;
	listNode* delNode;

	prevNode = H->head;
	while (prevNode->link->data != deldata) {
		prevNode = prevNode->link;
	}

	if (H->head == NULL) return;
	else {
		delNode = prevNode->link;

		if (delNode == prevNode)H->head = NULL;
		else {
			prevNode->link = delNode->link;
			if (delNode == H->head) H->head = delNode->link;
		}
		free(delNode);
	}
	printf("%d 데이터 값을 가진 노드가 삭제되었습니다. \n", deldata);
	return;
}

void printList(linkedList_h* L) {

	listNode* p;
	listNode* tmp;

	p = L->head;

	if (p == NULL) {
		printf("연결 리스트가 공백입니다. \n\n");
		return;
	}
	else {
		printf("List = (");
		tmp = L->head;
		printf("%d", p->data);
		p = p->link;

		while (p != tmp) {
			printf(" --> ");
			printf("%d", p->data);
			p = p->link;
		}
		
		printf(")\n\n");
	}
}

void main_circular_linkedList() {
	linkedList_h* L;
	L = createLinkedList_h();

	printf("1. 공백 원형 연결 리스트 생성을 완료하였습니다. \n\n");

	printf("2. 원형 연결 리스트에 노드르 추가합니다.(데이터값: 100,90,80).\n");
	addNode(L, 100);
	printList(L);

	addNode(L, 90);
	printList(L);

	addNode(L, 80);
	printList(L);

	printf("3. 원형 연결 리스트 중간 노드 뒤에 노드를 추가합니다. \n");
	printf("(데이터값이 100인 노드 뒤에 데이터값 110인 노드를 추가)\n");
	addMiddleNode(L, 100, 110);
	printList(L);

	printf("4. 원형 연결 리스트에서 노드를 삭제합니다.(데이터값:110,90,80). \n");
	deleteCircularNode(L,110);
	printList(L);

	deleteCircularNode(L, 90);
	printList(L);

	deleteCircularNode(L, 80);
	printList(L);

	deleteCircularNode(L, 100);
	printList(L);

	printf("원형 연결 리스트 삽입, 삭제 연산이 끝났습니다. \n");
}