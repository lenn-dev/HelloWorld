// �������Ḯ��Ʈ ��� ����,���� ���α׷�
// ���Ḯ��Ʈ�� ������ ����� NULL �ε�, 
// �̸� ù��° ��带 ����Ű�� �Ͽ� ������ �������� ����.
// ���鸮��Ʈ�� ó������ ��带 ������ ��쿡�� �ڱ� �ڽ��� ����Ŵ
// �߰��� ��尡 ���ԵǴ� ��쿡�� ù��° ��� ����Ŵ
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
	linkedList_h* H; // ������(������:8����Ʈ)
	H = (linkedList_h*)malloc(sizeof(linkedList_h)); 
	H->head = NULL; 
	return H;
}

void addNode(linkedList_h* H, int x) {
	// ��������� -> ù��° ��� 
	// ù��° ��ġ�� ���ο� ��� ���ԵǸ�, ��������� ��ũ�� �����ؾ���
	listNode* tempNode; // ��������� ��ũ�� 
	listNode* NewNode;

	NewNode = (listNode*)malloc(sizeof(listNode));
	NewNode->data = x;
	NewNode->link = NULL;

	if (H->head == NULL) {
		// head �� NewNode ����Ű�� ��
		H->head = NewNode;
		
		// *** ù��° ��尡 �ڱ��ڽ��� ����Ű�� �ؼ� �������� ����
		NewNode->link = NewNode;
		return;
	}

	// ������ �ƴ� ��� ����
	tempNode = H->head;
	while (tempNode->link != H->head)tempNode = tempNode->link;
	NewNode->link = tempNode->link;
	tempNode->link = NewNode;
	H->head = NewNode;
}

// �Ѱ� ��� �߰��� ����
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
	printf("%d ������ ���� ���� ��尡 �����Ǿ����ϴ�. \n", deldata);
	return;
}

void printList(linkedList_h* L) {

	listNode* p;
	listNode* tmp;

	p = L->head;

	if (p == NULL) {
		printf("���� ����Ʈ�� �����Դϴ�. \n\n");
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

	printf("1. ���� ���� ���� ����Ʈ ������ �Ϸ��Ͽ����ϴ�. \n\n");

	printf("2. ���� ���� ����Ʈ�� ��帣 �߰��մϴ�.(�����Ͱ�: 100,90,80).\n");
	addNode(L, 100);
	printList(L);

	addNode(L, 90);
	printList(L);

	addNode(L, 80);
	printList(L);

	printf("3. ���� ���� ����Ʈ �߰� ��� �ڿ� ��带 �߰��մϴ�. \n");
	printf("(�����Ͱ��� 100�� ��� �ڿ� �����Ͱ� 110�� ��带 �߰�)\n");
	addMiddleNode(L, 100, 110);
	printList(L);

	printf("4. ���� ���� ����Ʈ���� ��带 �����մϴ�.(�����Ͱ�:110,90,80). \n");
	deleteCircularNode(L,110);
	printList(L);

	deleteCircularNode(L, 90);
	printList(L);

	deleteCircularNode(L, 80);
	printList(L);

	deleteCircularNode(L, 100);
	printList(L);

	printf("���� ���� ����Ʈ ����, ���� ������ �������ϴ�. \n");
}