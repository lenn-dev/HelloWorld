// 자료구조 5강 연결리스트
// 배열로 구현된 리스트는 원소 순서가 연속적인 물리적 주소에 저장되지만
// 포인터를 이용한 리스트 구현은
// 노드(리스트원소값:데이터 + 다음원소 가리키는 정보:포인터,주소,링크)
// 연결리스트 노드 삽입, 삭제, 탐색 연산 프로그램

//#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h> // malloc 함수 사용: 동적할당

// 리스트 생성 : 정수값 'data' 와 링크 'link'로 구성된 노드생성
// struct 타입의 ListNode
// struct 와 typedef struct 차이는 main 함수에서 struct 쓸 필요 없이 형태(이름)만 쓰면됨
// typedef struct는 중괄호 끝에 형태가 옴
typedef struct ListNode { // 단순 연결 리스트의 노드 구조 정의
	int data;
	struct ListNode* link;
}listNode;

typedef struct { //리스트의 헤드 노드 구조 정의
	listNode* head;
}linkedList_h;

linkedList_h* createLinkedList_h(void) { // 연결리스트 생성
	linkedList_h* H;

	//헤드 사이즈 만큼 동적할당 후 리턴된 void를 linkdeList_h* 로 캐스팅
	// C 언어가 오버로딩이 안되서 이 방법씀?
	H = (linkedList_h*)malloc(sizeof(linkedList_h));
	H-> head = NULL; //H의 head 에 NULL값할당
	return H;
}

// NewNode와 헤드노드 연결
void addNode(linkedList_h* H, int x) { // 연결 리스트의 노드 삽입
	// 리스트 마지막 노드에 삽입 연산하며, x값은 100,200,300로 가정함
	listNode* NewNode; // 노드생성
	listNode* LastNode; // 노드생성
	NewNode = (listNode*)malloc(sizeof(listNode)); // 노드 동적할당

	NewNode-> data = x; // 데이터값
	NewNode->link = NULL; // 주소값

	if (H->head == NULL) { // 현재 리스트가 공백인 경우
		H->head = NewNode;
		return;
	}

	// 맨 마지막에 넣겠다는 것
	// LastNode 가 link가 널이면 리스트 마지막이라는 것이고,
	// 맨 뒤에 새로생성한 노드를 연결시킴
	LastNode = H->head;
	while (LastNode->link != NULL) LastNode = LastNode->link;
	LastNode->link = NewNode;
}

void deleteNode(linkedList_h* H) { // 리스트의 마지막 노드 삭제 연산
	listNode* prevNode;
	listNode* delNode;

	if (H->head == NULL)return; // 공백 리스트인 경우, 삭제연산 중단
	if (H->head->link == NULL) {// 리스트에 노드가 한개인 경우
		free(H->head);     // 첫 번째 노드의 메모리를 해제
		H->head = NULL; // 헤드 주소값을 NULL로 바꿈
		return;
	}
	else { // 리스트 노드가 여러개인 경우 : 마지막까지 찾아가야 함
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
	//연결 리스트에서 데이터의 값(deldata)를 가진 노드(delNode)를 삭제하는 연산
	listNode* delNode;
	listNode* prevNode;
	prevNode = H->head;

	while (prevNode->link->data != deldata) {
		prevNode = prevNode->link;
	}
	
	delNode = prevNode->link;
	prevNode->link = delNode->link;
	free(delNode);

	printf("%d 데이터 값을 가진 노드가 삭제되었습니다. \n", deldata);
	return;
}

void additNode(linkedList_h* H, int itdata, int adddata) {
	//연결 리스트에서 특정 노드 뒤에(리스트중간에) 노드를 삽입하는 연산
	//itdata: prevNode의 데이터, adddata : 삽입할 노드의 데이터
	listNode* prevNode;
	prevNode = H-> head;

	while (prevNode->data != itdata) {
		prevNode = prevNode -> link;
	}

	listNode* NewNode;
	NewNode = (listNode*)malloc(sizeof(listNode));
	NewNode-> data = adddata;
	NewNode-> link = NULL;

	// NewNode를 사이에 껴넣음
	NewNode-> link = prevNode->link;
	prevNode-> link = NewNode;
	return;
}

void serchNode(linkedList_h* H, int itdata) {
	// 연결 리스트에서 특정 노드를 검색하여 반환하고자 하는 연산
	listNode* tempNode;
	tempNode = H->head;

	while (tempNode->data != itdata) {
		tempNode = tempNode->link;
	}
	printf("%d 데이터 값을 가진 노드를 검색하는데 성공하였습니다. \n\n");
}

void printList(linkedList_h* L) {
	// 노드 순서대로 리스트를 출력하는 함수
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

	printf("1. 공백 연결 리스트 생성을 완료하였습니다. \n\n");

	printf("2. 연결 리스트에 노드를 추가합니다.(데이터값:100,200,300).  \n");
	addNode(L,100);
	printList(L);

	addNode(L,200);
	printList(L);

	addNode(L,300);
	printList(L);

	printf("3. 특정 노드를 탐색합니다 (데이터값:200). \n");
	serchNode(L, 200);

	printf("4.리스트 특정 노드 뒤에 노드를 추가합니다. \n");
	printf("(데이터값이 100인 노드 위에 데이터 값 150인 노드를 추가) \n");
	addNode(L,100,150);
	printList(L);

	printf("3. 특정 노드를 삭제합니다 (데이터값:200). \n");
	deleteitNode(L, 200);
	printList(L);

	printf("6. 마지막 노드를 삭제합니다. \n");
	deleteNode(L);
	printList(L);

	printf("연결리스트 삽입, 삭제 연산이 끝났습니다. \n");

	return 0;

}