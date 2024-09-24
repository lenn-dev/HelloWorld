// �ڷᱸ�� 5�� ���Ḯ��Ʈ
// �迭�� ������ ����Ʈ�� ���� ������ �������� ������ �ּҿ� ���������
// �����͸� �̿��� ����Ʈ ������
// ���(����Ʈ���Ұ�:������ + �������� ����Ű�� ����:������,�ּ�,��ũ)
// ���Ḯ��Ʈ ��� ����, ����, Ž�� ���� ���α׷�

//#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h> // malloc �Լ� ���: �����Ҵ�

// ����Ʈ ���� : ������ 'data' �� ��ũ 'link'�� ������ ������
// struct Ÿ���� ListNode
// struct �� typedef struct ���̴� main �Լ����� struct �� �ʿ� ���� ����(�̸�)�� �����
// typedef struct�� �߰�ȣ ���� ���°� ��
typedef struct ListNode { // �ܼ� ���� ����Ʈ�� ��� ���� ����
	int data;
	struct ListNode* link;
}listNode;

typedef struct { //����Ʈ�� ��� ��� ���� ����
	listNode* head;
}linkedList_h;

linkedList_h* createLinkedList_h(void) { // ���Ḯ��Ʈ ����
	linkedList_h* H;

	//��� ������ ��ŭ �����Ҵ� �� ���ϵ� void�� linkdeList_h* �� ĳ����
	// C �� �����ε��� �ȵǼ� �� �����?
	H = (linkedList_h*)malloc(sizeof(linkedList_h));
	H-> head = NULL; //H�� head �� NULL���Ҵ�
	return H;
}

// NewNode�� ����� ����
void addNode(linkedList_h* H, int x) { // ���� ����Ʈ�� ��� ����
	// ����Ʈ ������ ��忡 ���� �����ϸ�, x���� 100,200,300�� ������
	listNode* NewNode; // ������
	listNode* LastNode; // ������
	NewNode = (listNode*)malloc(sizeof(listNode)); // ��� �����Ҵ�

	NewNode-> data = x; // �����Ͱ�
	NewNode->link = NULL; // �ּҰ�

	if (H->head == NULL) { // ���� ����Ʈ�� ������ ���
		H->head = NewNode;
		return;
	}

	// �� �������� �ְڴٴ� ��
	// LastNode �� link�� ���̸� ����Ʈ �������̶�� ���̰�,
	// �� �ڿ� ���λ����� ��带 �����Ŵ
	LastNode = H->head;
	while (LastNode->link != NULL) LastNode = LastNode->link;
	LastNode->link = NewNode;
}

void deleteNode(linkedList_h* H) { // ����Ʈ�� ������ ��� ���� ����
	listNode* prevNode;
	listNode* delNode;

	if (H->head == NULL)return; // ���� ����Ʈ�� ���, �������� �ߴ�
	if (H->head->link == NULL) {// ����Ʈ�� ��尡 �Ѱ��� ���
		free(H->head);     // ù ��° ����� �޸𸮸� ����
		H->head = NULL; // ��� �ּҰ��� NULL�� �ٲ�
		return;
	}
	else { // ����Ʈ ��尡 �������� ��� : ���������� ã�ư��� ��
		prevNode = H -> head;
		delNode = H -> head -> link;

		while (delNode -> link != NULL) {
			prevNode = delNode;
			delNode = delNode -> link;
		}

		free(delNode);
		prevNode -> link = NULL;
	}
}

void deleteitNode(linkedList_h* H, int deldata) {
	//���� ����Ʈ���� �������� ��(deldata)�� ���� ���(delNode)�� �����ϴ� ����
	listNode* delNode;
	listNode* prevNode;
	prevNode = H->head;

	while (prevNode->link->data != deldata) {
		prevNode = prevNode->link;
	}
	
	delNode = prevNode->link;
	prevNode->link = delNode->link;
	free(delNode);

	printf("%d ������ ���� ���� ��尡 �����Ǿ����ϴ�. \n", deldata);
	return;
}

void additNode(linkedList_h* H, int itdata, int adddata) {
	//���� ����Ʈ���� Ư�� ��� �ڿ�(����Ʈ�߰���) ��带 �����ϴ� ����
	//itdata: prevNode�� ������, adddata : ������ ����� ������
	listNode* prevNode;
	prevNode = H-> head;

	while (prevNode->data != itdata) {
		prevNode = prevNode -> link;
	}

	listNode* NewNode;
	NewNode = (listNode*)malloc(sizeof(listNode));
	NewNode-> data = adddata;
	NewNode-> link = NULL;

	// NewNode�� ���̿� ������
	NewNode-> link = prevNode->link;
	prevNode-> link = NewNode;
	return;
}

void serchNode(linkedList_h* H, int itdata) {
	// ���� ����Ʈ���� Ư�� ��带 �˻��Ͽ� ��ȯ�ϰ��� �ϴ� ����
	listNode* tempNode;
	tempNode = H->head;

	while (tempNode->data != itdata) {
		tempNode = tempNode->link;
	}
	printf("%d ������ ���� ���� ��带 �˻��ϴµ� �����Ͽ����ϴ�. \n\n");
}

void printList(linkedList_h* L) {
	// ��� ������� ����Ʈ�� ����ϴ� �Լ�
	listNode* p;
	printf("List = (");
	p = L-> head;

	while (p != NULL) {
		printf("%d", p -> data);
		p = p-> link;
		if (p != NULL)printf(" --> ");
	}

	printf(")\n\n");
}

void main() {
	linkedList_h* L;
	L = createLinkedList_h();

	printf("1. ���� ���� ����Ʈ ������ �Ϸ��Ͽ����ϴ�. \n\n");

	printf("2. ���� ����Ʈ�� ��带 �߰��մϴ�.(�����Ͱ�:100,200,300).  \n");
	addNode(L,100);
	printList(L);

	addNode(L,200);
	printList(L);

	addNode(L,300);
	printList(L);

	printf("3. Ư�� ��带 Ž���մϴ� (�����Ͱ�:200). \n");
	serchNode(L, 200);

	printf("4.����Ʈ Ư�� ��� �ڿ� ��带 �߰��մϴ�. \n");
	printf("(�����Ͱ��� 100�� ��� ���� ������ �� 150�� ��带 �߰�) \n");
	addNode(L,100,150);
	printList(L);

	printf("3. Ư�� ��带 �����մϴ� (�����Ͱ�:200). \n");
	deleteitNode(L, 200);
	printList(L);

	printf("6. ������ ��带 �����մϴ�. \n");
	deleteNode(L);
	printList(L);

	printf("���Ḯ��Ʈ ����, ���� ������ �������ϴ�. \n");

	return 0;

}