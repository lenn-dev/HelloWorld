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


// �ܼ� ���� ����Ʈ�� ��� ���� ����===============================================
// ����� ���� : �������ʵ� + �������ʵ�
typedef struct ListNode { 
	int data; // �������ʵ� �κ� ������ ���� ����� ���� �Ҵ�
	struct ListNode* link; // ���� ��� �ּҰ� ����, ListNode������ ���, ��� ��ü�� ����Ű�� ����Ʈ ����
}listNode;


// ����Ʈ�� ��� ��� ���� ����=====================================================
// ������ �ʵ� �ʿ� �����Ƿ� ����Ʈ ù��° ���� ����Ű�� ���� ��ũ �ʵ常 ����
typedef struct { 
	listNode* head; // �ڷ��� ListNode�� ����ų �� �ֵ��� ����
}linkedList_h;


// ���Ḯ��Ʈ ����====================================================================
linkedList_h* createLinkedList_h(void) { 
	linkedList_h* H; // ����� ����

	// ��� ������ ��ŭ �����Ҵ� �� ���ϵ� void�� linkdeList_h* �� ĳ����
	// �޸��Ҵ���� �� �ش� �ּҸ� ��ȯ
	// C �� �����ε��� �ȵǼ� �� �����?
	H = (linkedList_h*)malloc(sizeof(linkedList_h));
	H-> head = NULL; //H�� head �� ���� ����ų ���� �����Ƿ� NULL�� �Ҵ�
	return H;
}

// NewNode�� ����� ����=======================================================
// ����Ʈ ������ ��� �ڿ� ���� �����ϸ�, x���� 100,200,300�� ������
void addNode(linkedList_h* H, int x) { 
	
	// ����ü listNode����� �����, ������ ��� ����
	listNode* NewNode; // �� ��� 
	listNode* LastNode; // ���Ḯ��Ʈ ��� ���� ��� ������ ��� ã�� ���� ����

	// malloc�Լ� �̿��� NewNode �����Ҵ�, �Ҵ���� �޸𸮰��� �ּҰ��� NewNode�� ����
	// �� ���Ӱ� �Ҵ�� �޸� ������ NewNode�� ����Ŵ
	NewNode = (listNode*)malloc(sizeof(listNode)); // ��� �����Ҵ�

	// ����ülistNode�� �̿��� ������ NewNode�� ������� data, link�� �� �Ҵ�
	NewNode -> data = x; // ������ �� �Ű������� ����.
	NewNode -> link = NULL; // �ּҰ� ���� NULL

	// ���� ����� ��尡 ���� ������ ���Ǹ����ؼ� �����
	// ù��° ��� ����(100)�� �� �ι�° ȣ��ÿ��� �����̹Ƿ� ������� ����
	if (H->head == NULL) { // ���� ����Ʈ�� ������ ���
		
		// �����(H)�� ���� ������ NewNode ����Ű���� H ��ũ�ʵ忡 NewNode �ּҰ� ����
		// �� H -> head ������ NewNode �ּҰ��� �����. 
		// ����忡�� NewNode�� ������
		H->head = NewNode;
		return;
		// ��������� ���� ��带 �Ѱ��ۿ� �������� �ʾ����Ƿ�
		// if�������� �۾��� �����ϰ� return �ϹǷ� LastNode��� �ȵ�
	}

	
	// �ռ� ���� ���Ḯ��Ʈ �� �ڿ� ���� ������ ��带 �����Ű�� �����Ͱ� �ֱ�
	// LastNode�� H����� ��ũ�ʵ尡 ����Ű�� �ִ� �� 
	// ���⼭�� �ռ� ������� ���(�����Ͱ�=100)�� ����Ŵ
	LastNode = H->head; 

	// LastNode ��ũ�ʵ尪�� NULL�̹Ƿ� while�� �����̶� ������� ����
	// ��ũ�ʵ� ���� NULL�̶�� ���� ������ ����� ���̹Ƿ�,
	// �� ��尡 ���ο� ��带 ����Ű�� �����ν� ������ ���������� �ϴ� ��
	while (LastNode->link != NULL) LastNode = LastNode->link;
	// ��ũ �ʵ忡 NewNode(�����Ͱ�=200)�� �ּҰ��� ������ NewNode�� ����ų �� �ֵ��� ��.
	LastNode->link = NewNode;
}


// ����Ʈ�� ������ ��� ���� ����================================================
// �����(H)���� ������ ��ũ��� ���󰡸� ��������� ã�Ƽ� ����
// ������ ��� ���� �� �� �������� ��ũ�ʵ尪�� NULL�� �Ǿ�� ��
// ������ ������ �� ������ ���� ������ ����ؾ� ��
void deleteNode(linkedList_h* H) { 
	listNode* prevNode; // �����Ǵ� ����� ������ ����, �ڷ��� ListNode�� ����Ŵ
	listNode* delNode; // �����Ǵ� ��� ����

	if (H->head == NULL)return; // ���� ����Ʈ�� ���, �������� �ߴ�
	
	// ����尡 ����Ű�� �ִ� ���� ��ũ���� NULL�� ��� �� : 
	// ����Ʈ�� ��尡 �Ѱ��� ���
	if (H->head->link == NULL) {
		free(H->head);     // ù ��° ����� �޸𸮸� ����
		H->head = NULL; // ��� ��ũ�ʵ� ���� head���� NULL�� �ٲ�
		return;
	}
	else { // ����Ʈ ��尡 �������� ��� : ���������� ã�ư��� ��
		prevNode = H -> head; // ������ ��� �� ��带 ����Ű���� ��ġ����, �켱�� ��尡 ����Ű�� ��
		delNode = H -> head -> link; // ������ ��� ó�� ��ġ�� prevNode�� ���� ��ġ�� ����

		// delNode�� ����Ű�� �ּҰ��� NULL�� �ƴϹǷ� ���̹Ƿ� �����
		// ���� ����Ʈ ������ ���Ұ� �ƴ϶�� ��
		// prevNode�� ����Ű�� ��带 delNode�� ����Ű�� ���� ����
		// delNode ��ũ�ʵ� �� ���󰡸鼭 ��ũ�ʵ尪�� NULL �϶����� 
		// delNode��ġ�����Ͽ� ���Ḯ��Ʈ�� ������ ��� ����ų �� �ֵ��� ��.
		while (delNode -> link != NULL) {
			//delNode�� ��ġ�� �������� prevNode�� ��ġ�� ���� ����
			// delNode�� ����Ű�� �ִ� ��� ���� ����Ű�� ��.
			// delNode��ġ�� ����� �� �� ������ ��尡 ����� �� 
			// �����ϴ� ����� �� ��带 ����ų �� �ִ� prevNode�� ��ġ�� ������
			prevNode = delNode;
			delNode = delNode -> link; 
		}

		// ������ ����� delNode�� ����Ű�� ���� �޸� ���� ��ȯ
		free(delNode);
		// ������ ��尡 �� prevNode�� ����Ű�� �ִ� ����� ��ũ �ʵ� ���� NULL�� ����
		prevNode -> link = NULL;
	}
}


// ���� ����Ʈ���� �������� ��(deldata)�� ���� ���(delNode)�� �����ϴ� ����=======
// ����忡�� ������ ������ �� ���ϸ� �����Ϸ��� ��带 ã�ƾ���.
// �̸� ���� ��ũ��� ���󰡾� ��. ������ ���� ���� ��带 ã�� ��� ����.
// ���� ��� �յ� ��尡 �ִ� ���, ������ ��ũ���� ������� ������ �ּҰ� �����Ͽ� ����
// ��尡 �������� ����, ������尡 �����ϴ��� ���� Ȯ��
// ������尡 ó���� ������ ��� ����� ��ũ�� ����
// �߰��� ������ ��� ������� ������ �� �����Ͽ� ������� ������� �������־�� ��

// Ư����带 ã�� ���� �˻� ���� ���� �ڵ� �̿�
// 
// ���������� �����ϰ��� �ϴ� ���(delNode)�� �� ���� ���(prevNode)�� ����
// �����͸� �Ű������� �޾� ó���ϴ� ���� �ڵ� �����
void deleteitNode(linkedList_h* H, int deldata) {
	
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



// ����Ʈ �߰��� �����ϴ� ����,=================================================== 
// 100 ������ �ڿ� 150 �����͸� ���� 
// ����, �����ڵ�
// ���Ḯ��Ʈ�� �����(H)�� 
// �����ϰ����ϴ� ����� ������ ��ġ ����Ű�� prevNode,
// �����ϴ� ����� ������ ���� �Ű������� ����


// ���� ���� �ڵ�
//void additNode(linkedList_h* H, listNode* prevNode, int itdata) {
//
//	listNode* NewNode; // �� ���
//	NewNode = (listNode*)malloc(sizeof(listNode)); // �����޸��Ҵ� �� �ּ�����
//	NewNode -> data = itdata; // �����Ͱ� ����
//	NewNode -> link = NULL; // ����Ű�� ��� ����
//
//	// �� ��� NewNode�� prevNode�ڿ� ���ԵǾ�� �ϹǷ� 
//	// ���� NewNode���� prevNode�� ����Ű�� �ּҸ� ����Ű�� ��(�� �� �տ� ����(������) ���� ����)
//	// �״��� prevNode�� NewNode�� ����Ű�� �� (�� �� �� �տ� �� ���� �� ��(������)�� ����)
//	// �ݴ��� ������ �ϸ� prevNode����Ű�� link�� �Ұ� �Ǿ� �����߻�
//	NewNode -> link = prevNode -> link;
//	prevNode -> link = NewNode;
//	return;
//}

 //�����ڵ����Ͽ� ���� �ڵ�
void additNode(linkedList_h* H, int itdata, int adddata) {

	//itdata: prevNode�� ������, adddata : ������ ����� ������
	listNode* prevNode;
	prevNode = H-> head;

	while (prevNode->data != itdata) {
		prevNode = prevNode -> link;
	}

	listNode* NewNode;
	NewNode = (listNode*)malloc(sizeof(listNode));
	NewNode->data = itdata;
	NewNode->link = NULL;

	// NewNode�� ���̿� ������
	NewNode->link = prevNode->link;
	prevNode->link = NewNode;
	return;
}



// ���� ����Ʈ���� Ư�� ��带 �˻��Ͽ� ��ȯ�ϰ��� �ϴ� ����=======================
//����Ʈ ������ ��ũ�� ���󰡸鼭 ����� �����Ͱ��� 
// ������ �����Ͱ��� ���ϸ� ���翩�� ���
// ��� ���ų�, ���Ḯ��Ʈ ������ ��� ����ϴ� ���� ������
// ���⿡�� �ݵ�� �ִ� ������ ����.
void serchNode(linkedList_h* H, int itdata) {
	
	listNode* tempNode;
	tempNode = H->head;

	while (tempNode->data != itdata) {
		tempNode = tempNode->link;
	}
	printf("%d ������ ���� ���� ��带 �˻��ϴµ� �����Ͽ����ϴ�. \n\n");
}


//�����ڵ�
// ���� ����Ʈ���� Ư�� ��带 �˻��Ͽ� �����ϰ��� �ϴ� ����
// ���Ḯ��Ʈ�� �����(H)�� ã���� �ϴ� �����Ͱ�(itdata)�� �Ű������� ���޹��� 
void findandDeleteNode(linkedList_h* H, int itdata) {
	listNode* prevNode; // ������ ��� ������ ����
	listNode* delNode; // ������ ��� ����

	// ����� ���� NULL�� ���� ���鸮��Ʈ�̹Ƿ� �˻��ߴ�
	if (H->head == NULL)return; // ���鸮��Ʈ
	
	
	prevNode = H; // ��� ���� ����Ű���� �켱 ��ġ�� ���� ����
	delNode = H->head; // ������尡 ���Ḯ��Ʈ ù��° ����Ű���� ��

	// delNode�� NULL�� �ƴ� ���� ����忡 ��尡 ����Ǿ� �ִ� ���- ��
	while (delNode != NULL) {
		// �Ű������� ���� idata���� delNode�����Ͱ� ��
		// ���� ��� ���������� ã��
		if (delNode->data == itdata) {
			//Ư����� �����ϴ� deleteitNode�Լ� ȣ��, ����
			deleteitNode(H, prevNode, delNode);
			return;
		}
		// ���� ���� ��� delNode�� ���� ��带 ����Ŵ
		else {
			prevNode = delNode; // prevNode�� delNode�� ��ġ�� �̵�
			delNode = delNode->link; //delNode�� ����� ��ũ�� ���󰡼� �� ���� ��带 ����Ŵ
		}
	}
}




// ��� ������� ����Ʈ�� ����ϴ� �Լ�=============================================
void printList(linkedList_h* L) {
	
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


//main �Լ�=====================================================================
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
	printf("(�����Ͱ��� 100�� ��� �ڿ� ������ �� 150�� ��带 �߰�) \n");
	additNode(L,100,150);
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