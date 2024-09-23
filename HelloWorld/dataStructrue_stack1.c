// 3�� ���û���(������) -> ���û���(������) -> ����(������) 
// -> ����(������) -> ����(������) -> ����(������) -> ����(������)

//#pragma warning(disable:4996)
#define STACK_SIZE 5 // ���û����� �̸� ����
#include <stdio.h>

typedef int element; // �� ������: ���α׷��� �� Ÿ�Ժ�ȯ�� ������ ���� �ʿ� ��� ����
element stack[STACK_SIZE]; // ��Ʈ�� �����̶� �迭,�迭������� STACK_SIZE�� 5
int top = -1;

void PrintStack() { // ���ð� ���
	int i;
	printf("\n STACK ���� : \n");
	// ����ó�� �����ϱ� ���� TOP���� �Ųٷ� ���
	for (i = STACK_SIZE - 1; i >= 0; i--) {
		printf("[%d]=%5d\n", i, stack[i]);
	}
	printf("\n");
	printf("\n");
}


void createStack(int n) { // ���� �ʱⰪ ����
	// ���û��� �Լ� ȣ��� �Ű�����(������ ���� ����) ����
	int i;
	for (int i = 0; i < n; i++) {
		stack[i] = -1; // ��� ���ÿ� -1�� �ʱ�ȭ
	}
	printf("������ �ʱ�ȭ�Ͽ����ϴ�. \n");
	PrintStack();  // -1�� �ʱ�ȭ�� ���ð� ���
}

// �Է��� ���� ���ÿ� ���� ��쿡 POP����
element pop() { // ��ȯ ��Ʈ�� (�� �������� element�� ����) 
	int popvalue;
	printf("������ POP ������ �����մϴ�. \n");
	if (top == -1) {
		printf("Stack is Empty! \n");
		return 0;
	}
	else {
		printf("stack[%d] output %d pop success! \n", top, stack[top]);
		popvalue = stack[top];
		stack[top--] = -1; // ���� ���� �ִ� �� -1�� �ʱ�ȭ �� �ڿ� 
		return popvalue; // popvalue��ȯ
	}
}

void push() { // ���� push ����, �� ���� ���� �Ҵ��� ����
	element item; // ��Ʈ�� item

	printf("���ÿ� ������ ���� �Է��ϼ��� : ");
	scanf_s("%d", &item);
	//top �ʱ�ȭ -1 �صξ  ���� �ε������� ũ�ٸ� else �� ����Ǿ� ������ �� ����.
	if (top >= STACK_SIZE - 1) {
		printf("Stack is full!! \n");
		return;
	}
	// top���� -1�̶�� �ʱ�ȭ�����̴� push������
	// top���� 1�� ���� ��Ų �� ���� �ε����� ������ �ε��� 0���� �Է°��� �����
	else {
		stack[++top] = item; //
		printf("stack[%d] input %d : push success! \n", top, stack[top]);
	}
}

void main_stack() { //�����Լ�
	createStack(STACK_SIZE);
	push();
	PrintStack();
	push();
	PrintStack();
	pop();
	PrintStack();
	push();
	PrintStack();
	pop();
	PrintStack();
	pop();
	PrintStack();
	printf("The End. \n");
}