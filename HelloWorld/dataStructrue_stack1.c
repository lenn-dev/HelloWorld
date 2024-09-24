//// 자료구조 3강 스택 
//// push와 pop연산이 한곳에서 발생
//// 스택생성(결과출력) -> 스택삽입(결과출력) -> 삽입(결과출력) 
//// -> 삭제(결과출력) -> 삽입(결과출력) -> 삭제(결과출력) -> 삭제(결과출력)
//
////#pragma warning(disable:4996)
//#define STACK_SIZE 3 // 스택사이즈 미리 설정
//#include <stdio.h>
//
//typedef int element; // 형 재정의: 프로그래밍 중 타입변환을 일일히 해줄 필요 없어서 편함
//element stack[STACK_SIZE]; // 인트형 스택이란 배열,배열사이즈는 STACK_SIZE인 5
//int top = -1;
//
//void PrintStack() { // 스택값 출력
//	int i;
//	printf("\n STACK 상태 : \n");
//	// 맨 아래 인덱스[0] 이 TOP
//	for (i = STACK_SIZE - 1; i >= 0; i--) {
//		printf("[%d]=%5d\n", i, stack[i]);
//	}
//	printf("\n");
//	printf("\n");
//}
//
//
//void createStack(int n) { // 스택 초기값 설정
//	// 스택생성 함수 호출시 매개변수(생성할 스택 갯수) 받음
//	int i;
//	for (int i = 0; i < n; i++) {
//		stack[i] = -1; // 모든 스택에 -1로 초기화
//	}
//	printf("스택을 초기화하였습니다. \n");
//	PrintStack();  // -1로 초기화된 스택값 출력
//}
//
//// 입력한 값이 스택에 있을 경우에 POP해줌
//element pop() { // 반환 인트형 (형 재정의한 element로 써줌) 
//	int popvalue;
//	printf("스택의 POP 연산을 실행합니다. \n");
//	if (top == -1) {
//		printf("Stack is Empty! \n");
//		return 0;
//	}
//	else {
//		printf("stack[%d] output %d pop success! \n", top, stack[top]);
//		popvalue = stack[top];
//		stack[top--] = -1; // 가장 위에 있는 것 -1로 초기화 한 뒤에 top 인덱스 하나 빼주고 이동
//		return popvalue; // popvalue반환
//	}
//}
//
//void push() { // 스택 push 연산, 맨 위에 값을 할당할 예정
//	element item; // 인트형 item, 스택에 삽입되는 원소
//
//	printf("스택에 저장할 값을 입력하세요 : ");
//	scanf_s("%d", &item);
//	//top 초기화 -1 해두어서  스택 인덱스보다 크다면 else 가 실행되어 스택이 차 있음.
//	if (top >= STACK_SIZE - 1) {
//		printf("Stack is full!! \n");
//		return;
//	}
//	// top값이 -1이라면 초기화상태이니 push가능함
//	// top값에 1을 증가 시킨 뒤 스택 인덱스에 넣으면 인덱스 0부터 입력값이 저장됨
//	else {
//		stack[++top] = item; //
//		printf("stack[%d] input %d : push success! \n", top, stack[top]);
//	}
//}
//
//void main_stack1() { //메인함수
//	createStack(STACK_SIZE);
//	push(); //S
//	PrintStack();
//	push(); //T
//	PrintStack();
//	pop();
//	PrintStack();
//	push();//R
//	PrintStack();
//	push();//P
//	PrintStack();
//	push();//Q 배열이 이미 다 차있으므로 저장안됨
//	PrintStack();
//	pop();
//	PrintStack(); // P가 제거됨
//	printf("The End. \n");
//}