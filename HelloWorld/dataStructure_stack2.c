//자료구조 3강 스택 
// 스택의 활용 : 
// 1. 대한 메모리 할당과 수집을 위한 시스템스택
// 2. 서브루틴 호출관리를 위한 스택
// 3. 연산자간의 우선순위에 의해 계산순서가 결정되는 수식계산
// 4. 인터럽트의 처리와 되돌아갈 명령 수행지점을 저장하기 위한 스택
// 5. 컴파일러, 순환 호출관리
// 
// 후위연산 구현
// 
// #pragma warning(disable:4996)


#define STACK_SIZE 50
#include <stdio.h>

typedef int element;
element stack[STACK_SIZE];
int top = -1; // 스택의 맨 위의 값은 -1

void createStack(int n) { // 스택 초기값 설정
	// 스택생성 함수 호출시 매개변수(생성할 스택 갯수) 받음
	int i;
	for (i=0; i< n; i++) {
		stack[i] = -1; // 모든 스택에 -1로 초기화
	}
}

element pop() {// 스택 pop 연산 함수
	int popvalue;
	if (top == -1) {
		printf("Stack is Empty! \n");
		return 0;
	}
	else {
		popvalue = stack[top];
		stack[top--] = 0; // 0으로 바꾼 이유?
		return popvalue; // popvalue반환
	}
}

void push(element item) { // 스택 push 연산 함수
	
	if (top >= STACK_SIZE - 1) {
		printf("Stack is full!! \n");
		return;
	}
	else {
		stack[++top] = item; // top의 다음자리에 item저장
	}
}

// 후위 표기식(369*+)을 계산하는 연산
// C프로그램에서 배열에 값을 넣을때 동일한 자료형이 들어가야 함. 
// 연산자는 문자이기 때문에 369를 string로 인식한 뒤 전환
element evalPostfix(char* exp) { //후위 연산 함수
	int oper1, oper2, value, i=0;
	int length = strlen(exp); // 입력된 수식의 길이 369*+ => 5
	char symbol;
	

	for (i=0; i < length; i++) {
		symbol = exp[i]; //입력된 배열 369*+
		if (symbol != '+' && symbol != '-' && symbol != '*' && symbol != '/') {
			value = symbol - '0'; // 문자를 숫자로 바꿈, 0의 아스키 값을 원래값에서 빼면 숫자값이 나옴. 
			push(value); // 연산자 아니니까 푸시
		}
		else { // 연산자 부분일 경우 +-*/ 팝한값 두개 가지고 연산 후 리턴
			oper2 = pop(); // 처음뽑은 것을 두번째 자리에
			oper1 = pop();
			switch (symbol) {
			case '+ ': push(oper1 + oper2); break;
			case '- ': push(oper1 - oper2); break;
			case '* ': push(oper1 * oper2); break;
			case '/ ': push(oper1 / oper2); break;
			}
		}
	}
	return pop();
}

void main_stack2() {
	createStack(STACK_SIZE);
	int result;
	char exp[50];
	printf("계산할 후위 표기식을 입력해 주세요 :");
	
	gets(exp);
	printf("user input %s :", exp);

	result = evalPostfix(&exp);

	printf("result = %d\n", result);
	printf("The End. \n");
}

// 프로그램 결과가 
// result =57 나와야 하는데 안나옴.


// gets로 입력수식 369*+를 string 으로 받고 끝네 NULL문자 추가하여 저장
// 저장된 