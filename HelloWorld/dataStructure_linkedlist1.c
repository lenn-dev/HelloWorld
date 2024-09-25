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


// 단순 연결 리스트의 노드 구조 정의===============================================
// 노드의 구조 : 데이터필드 + 포인터필드
typedef struct Node { 

	int data; // 데이터필드 부분 정수형 변수

	// 다음 노드는 지금 현재 노드와 같은 노드??가 되어야 해서
	// 다음노드의 포인터 변수는 struct Node 타입의 포인터가 되어야 함.
	// 다음 노드(struct Node타입의 구조체) 주소값 저장, Node포인터 사용, 노드 전체를 가리키는 포인트 변수
	struct Node* link; //struct Node타입의 구조체의 주소를 저장하는 포인터 변수
}Node; // 재정의 하지 않으면 매번 struct Node라고 해줘야 함.


// 주소를 저장하는 변수(포인터변수 : 8 바이트)
// 포인터는 64비트 시스템에서 무조건 8바이트를 차지함, 32비트에서 4바이트
// (같은 시스템에서 모든 자료형 int,double,char,Node...의 포인터 크기는 같음)
// 8바이트짜리 포인터가 생긴것
// 첫 노드의 주소를 저장하는 변수 (포인터변수: 8바이트)
// Node* head = NULL; 
// NULL: 포인터가 가리키는 대상이 없는 경우



// 리스트의 헤드 노드 구조 정의=====================================================
// 데이터 필드 필요 없으므로 리스트 첫번째 원소 가리키기 위한 링크 필드만 생성
typedef struct { 
	// 연결리스트에서 가장 중요한 시작노드 주소 저장하는 헤드 필요
	// 포인터변수 head 선언
	// 여기서 주의할 점은 head 선언하면 노드가 생성되는게 아니라
	// 8 바이트 짜리 포인터 변수가 선언된다는 점.
	Node* head; // 자료형 Node를 가리킬 수 있도록 정의

}linkedList_h;


// 연결리스트 생성====================================================================
linkedList_h* createLinkedList_h(void) { 
	linkedList_h* H; // 헤드노드 선언

	// 헤드 사이즈 만큼 동적할당 후 리턴된 void를 linkdeList_h* 로 캐스팅
	// 메모리할당받은 후 해당 주소를 반환
	// C 언어가 오버로딩이 안되서 이 방법씀?
	H = (linkedList_h*)malloc(sizeof(linkedList_h));
	H-> head = NULL; //H의 head 는 아직 가리킬 내용 없으므로 NULL값 할당
	return H;
}

// NewNode와 헤드노드 연결=======================================================
// 리스트 마지막 노드 뒤에 삽입 연산하며, x값은 100,200,300로 가정함
void addNode(linkedList_h* H, int x) { 
	
	// 구조체 Node사용해 새노드, 마지막 노드 선언
	Node* NewNode; // 새 노드 
	Node* LastNode; // 연결리스트 노드 많은 경우 마지막 노드 찾기 위한 변수

	// malloc함수 이용해 NewNode 동적할당, 할당받은 메모리공간 주소값을 NewNode에 저장
	// 즉 새롭게 할당된 메모리 공간은 NewNode가 가리킴
	NewNode = (Node*)malloc(sizeof(Node)); // 노드 동적할당

	// 구조체Node를 이용해 생성한 NewNode의 멤버변수 data, link에 값 할당
	NewNode->data = x; // 데이터 값 매개변수로 받음.
	NewNode->link = NULL; // 주소값 현재 NULL

	// 현재 열결된 노드가 없기 때문에 조건만족해서 실행됨
	// 첫번째 노드 생성(100)된 후 두번째 호출시에는 거짓이므로 실행되지 않음
	if (H->head == NULL) { // 현재 리스트가 공백인 경우
		
		// 헤드노드(H)가 새로 생성한 NewNode 가리키도록 H 링크필드에 NewNode 주소값 저장
		// 즉 H -> head 값으로 NewNode 주소값이 저장됨. 
		// 헤드노드에서 NewNode를 연결함
		H->head = NewNode;
		return;
		// 여기까지는 아직 노드를 한개밖에 삽입하지 않았으므로
		// if구문에서 작업을 수행하고 return 하므로 LastNode사용 안됨
	}

	
	// 앞서 만든 연결리스트 맨 뒤에 새로 생성한 노드를 연결시키고 데이터값 넣기
	// LastNode는 H노드의 링크필드가 가리키고 있는 곳 
	// 여기서는 앞서 만들었던 노드(데이터값=100)를 가리킴
	LastNode = H->head; 

	// LastNode 링크필드값이 NULL이므로 while문 거짓이라 실행되지 않음
	// 링크필드 값이 NULL이라는 것은 마지막 노드라는 것이므로,
	// 이 노드가 새로운 노드를 가리키게 함으로써 삽입이 가능해지게 하는 것
	while (LastNode->link != NULL) LastNode = LastNode->link;
	// 링크 필드에 NewNode(데이터값=200)의 주소값을 저장해 NewNode를 가리킬 수 있도록 함.
	LastNode->link = NewNode;
}


// 리스트의 마지막 노드 삭제 연산================================================
// 헤드노드(H)에서 시작해 링크노드 따라가며 마지막노드 찾아서 삭제
// 마지막 노드 삭제 후 그 선행노드의 링크필드값은 NULL이 되어야 함
// 삭제시 연결노드 한 개인지 여러 개인지 고려해야 함
void deleteNode(linkedList_h* H) { 
	Node* prevNode; // 삭제되는 노드의 선행노드 선언, 자료형 ListNode를 가리킴
	Node* delNode; // 삭제되는 노드 선언

	if (H->head == NULL)return; // 공백 리스트인 경우, 삭제연산 중단
	
	// 헤드노드가 가리키고 있는 곳의 링크값이 NULL인 경우 참 : 
	// 리스트에 노드가 한개인 경우
	if (H->head->link == NULL) {
		free(H->head);     // 첫 번째 노드의 메모리를 해제
		H->head = NULL; // 헤드 링크필드 값인 head값을 NULL로 바꿈
		return;
	}
	else { // 리스트 노드가 여러개인 경우 : 마지막까지 찾아가야 함
		prevNode = H->head; // 마지막 노드 앞 노드를 가리키도록 위치지정, 우선은 헤드가 가리키는 곳
		delNode = H->head->link; // 삭제할 노드 처음 위치는 prevNode의 다음 위치로 지정

		// delNode가 가리키는 주소값이 NULL이 아니므로 참이므로 실행됨
		// 연결 리스트 마지막 원소가 아니라는 것
		// prevNode가 가리키는 노드를 delNode가 가리키는 노드로 변경
		// delNode 링크필드 값 따라가면서 링크필드값이 NULL 일때까지 
		// delNode위치변경하여 연결리스트의 마지막 노드 가리킬 수 있도록 함.
		while (delNode -> link != NULL) {
			//delNode의 위치를 변경전에 prevNode의 위치를 먼저 변경
			// delNode가 가리키고 있는 노드 같이 가리키게 함.
			// delNode위치가 변경될 때 즉 삭제할 노드가 변경될 때 
			// 삭제하는 노드의 앞 노드를 가리킬 수 있는 prevNode의 위치도 변경함
			prevNode = delNode;
			delNode = delNode -> link; 
		}

		// 마지막 노드인 delNode가 가리키는 곳의 메모리 공간 반환
		free(delNode);
		// 마지막 노드가 된 prevNode가 가리키고 있는 노드의 링크 필드 값을 NULL로 저장
		prevNode -> link = NULL;
	}
}


// 연결 리스트에서 데이터의 값(deldata)를 가진 노드(delNode)를 삭제하는 연산=======
// 헤드노드에서 시작해 데이터 값 비교하며 삭제하려는 노드를 찾아야함.
// 이를 위해 링크노드 따라가야 함. 데이터 값이 같은 노드를 찾은 경우 삭제.
// 삭제 노드 앞뒤 노드가 있는 경우, 선행노드 링크값에 삭제노드 후행노드 주소값 저장하여 연결
// 노드가 공백인지 여부, 삭제노드가 존재하는지 여부 확인
// 삭제노드가 처음에 존재할 경우 헤드노드 링크값 수정
// 중간에 존재할 경우 삭제노드 선행노드 값 수정하여 삭제노드 후행노드와 연결해주어야 함

// 특정노드를 찾는 것은 검색 연산 수행 코드 이용
// 
// 삭제연산은 삭제하고자 하는 노드(delNode)와 그 앞의 노드(prevNode)에 대한
// 포인터를 매개변수로 받아 처리하는 연산 코드 만들기
void deleteitNode(linkedList_h* H, int deldata) {
	
	Node* delNode; 
	Node* prevNode;   
	prevNode = H->head;

	while (prevNode->link->data != deldata) {
		prevNode = prevNode->link;
	}
	//============================XXXXXXXXXXXXXXXXXXXXXX====================
	// 교재 124 설명과 다름
	// 삭제전 prevNode 링크 필드값을 delNode 후행노드 링크값으로 먼저 수정해야
	// prevNode가 삭제노드 후행노드의 주소를 잃어버리지 않을 수 있다고 했는데,
	// 여기는 삭제노드를 먼저 바꿈.
	delNode = prevNode->link;
	prevNode->link = delNode->link;
	//==============================XXXXXXXXXXXXXXXXXXXXX===================
	free(delNode);

	printf("%d 데이터 값을 가진 노드가 삭제되었습니다. \n", deldata);
	return;
}



// 리스트 중간에 삽입하는 연산,=================================================== 
// 100 데이터 뒤에 150 데이터를 삽입 
// 교재, 강의코드
// 연결리스트의 헤드노드(H)와 
// 삽입하고자하는 노드의 선행노드 위치 가리키는 prevNode,
// 삽입하는 노드의 데이터 값을 매개변수로 받음


// 교재 강의 코드
//void additNode(linkedList_h* H, listNode* prevNode, int itdata) {
//
//	listNode* NewNode; // 새 노드
//	NewNode = (listNode*)malloc(sizeof(listNode)); // 동적메모리할당 후 주소저장
//	NewNode -> data = itdata; // 데이터값 저장
//	NewNode -> link = NULL; // 가리키는 노드 없음
//
//	// 새 노드 NewNode가 prevNode뒤에 삽입되어야 하므로 
//	// 먼저 NewNode에게 prevNode가 가리키는 주소를 가리키게 함(나 니 앞에 여기(포인팅) 들어가고 싶음)
//	// 그다음 prevNode가 NewNode를 가리키게 함 (응 너 내 앞에 와 나는 너 뒤(포인팅)에 설게)
//	// 반대의 순서로 하면 prevNode가리키는 link를 잃게 되어 오류발생
//	NewNode -> link = prevNode -> link;
//	prevNode -> link = NewNode;
//	return;
//}

 //실행코드파일에 적힌 코드
void additNode(linkedList_h* H, int itdata, int adddata) {

	//itdata: prevNode의 데이터, adddata : 삽입할 노드의 데이터
	Node* prevNode;
	prevNode = H-> head;

	while (prevNode->data != itdata) {
		prevNode = prevNode -> link;
	}

	Node* NewNode;
	NewNode = (Node*)malloc(sizeof(Node));
	NewNode->data = itdata;
	NewNode->link = NULL;

	// NewNode를 사이에 껴넣음
	NewNode->link = prevNode->link;
	prevNode->link = NewNode;
	return;
}



// 연결 리스트에서 특정 노드를 검색하여 반환하고자 하는 연산=======================
//리스트 헤드부터 링크를 따라가면서 노드의 데이터값과 
// 삭제할 데이터값과 비교하며 존재여부 출력
// 노드 없거나, 연결리스트 공백인 경우 고려하는 것이 좋지만
// 여기에선 반드시 있는 것으로 가정.
void serchNode(linkedList_h* H, int itdata) {
	
	Node* tempNode;
	tempNode = H->head;

	while (tempNode->data != itdata) {
		tempNode = tempNode->link;
	}
	printf("%d 데이터 값을 가진 노드를 검색하는데 성공하였습니다. \n\n");
}


//교재코드
// 연결 리스트에서 특정 노드를 검색하여 삭제하고자 하는 연산
// 연결리스트의 헤드노드(H)와 찾고자 하는 데이터값(itdata)을 매개변수로 전달받음 
//void findandDeleteNode(linkedList_h* H, int itdata) {
//	listNode* prevNode; // 삭제될 노드 선행노드 선언
//	listNode* delNode; // 삭제될 노드 선언
//
//	// 헤드노드 값이 NULL인 경우면 공백리스트이므로 검색중단
//	if (H->head == NULL)return; // 공백리스트
//	
//	
//	prevNode = H; // 노드 앞을 가리키도록 우선 위치를 헤드로 정함
//	delNode = H->head; // 삭제노드가 연결리스트 첫번째 가리키도록 함
//
//	// delNode가 NULL이 아닌 경우는 헤드노드에 노드가 연결되어 있는 경우- 참
//	while (delNode != NULL) {
//		// 매개변수로 받은 idata값과 delNode데이터값 비교
//		// 참인 경우 삭제데이터 찾음
//		if (delNode->data == itdata) {
//			//특정노드 삭제하는 deleteitNode함수 호출, 연산
//			deleteitNode(H, prevNode, delNode);
//			return;
//		}
//		// 같지 않을 경우 delNode는 다음 노드를 가리킴
//		else {
//			prevNode = delNode; // prevNode는 delNode의 위치로 이동
//			delNode = delNode->link; //delNode는 저장된 링크값 따라가서 그 다음 노드를 가리킴
//			//while문이 반복됨
//		}
//	}
//}




// 노드 순서대로 리스트를 출력하는 함수=============================================
void printList(linkedList_h* L) {
	
	Node* p;
	printf("List = (");
	p = L-> head;

	while (p != NULL) {
		printf("%d", p -> data);
		p = p-> link;
		if (p != NULL)printf(" --> ");
	}

	printf(")\n\n");
}


//main 함수=====================================================================
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
	printf("(데이터값이 100인 노드 뒤에 데이터 값 150인 노드를 추가) \n");
	additNode(L,100,150);
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