//�ڷᱸ�� 3�� ���� 
// ������ Ȱ�� : 
// 1. ���� �޸� �Ҵ�� ������ ���� �ý��۽���
// 2. �����ƾ ȣ������� ���� ����
// 3. �����ڰ��� �켱������ ���� �������� �����Ǵ� ���İ��
// 4. ���ͷ�Ʈ�� ó���� �ǵ��ư� ��� ���������� �����ϱ� ���� ����
// 5. �����Ϸ�, ��ȯ ȣ�����
// 
// �������� ����
// 
// #pragma warning(disable:4996)


#define STACK_SIZE 50
#include <stdio.h>

typedef int element;
element stack[STACK_SIZE];
int top = -1; // ������ �� ���� ���� -1

void createStack(int n) { // ���� �ʱⰪ ����
	// ���û��� �Լ� ȣ��� �Ű�����(������ ���� ����) ����
	int i;
	for (i=0; i< n; i++) {
		stack[i] = -1; // ��� ���ÿ� -1�� �ʱ�ȭ
	}
}

element pop() {// ���� pop ���� �Լ�
	int popvalue;
	if (top == -1) {
		printf("Stack is Empty! \n");
		return 0;
	}
	else {
		popvalue = stack[top];
		stack[top--] = 0; // 0���� �ٲ� ����?
		return popvalue; // popvalue��ȯ
	}
}

void push(element item) { // ���� push ���� �Լ�
	
	if (top >= STACK_SIZE - 1) {
		printf("Stack is full!! \n");
		return;
	}
	else {
		stack[++top] = item; // top�� �����ڸ��� item����
	}
}

// ���� ǥ���(369*+)�� ����ϴ� ����
// C���α׷����� �迭�� ���� ������ ������ �ڷ����� ���� ��. 
// �����ڴ� �����̱� ������ 369�� string�� �ν��� �� ��ȯ
element evalPostfix(char* exp) { //���� ���� �Լ�
	int oper1, oper2, value, i=0;
	int length = strlen(exp); // �Էµ� ������ ���� 369*+ => 5
	char symbol;
	

	for (i=0; i < length; i++) {
		symbol = exp[i]; //�Էµ� �迭 369*+
		if (symbol != '+' && symbol != '-' && symbol != '*' && symbol != '/') {
			value = symbol - '0'; // ���ڸ� ���ڷ� �ٲ�, 0�� �ƽ�Ű ���� ���������� ���� ���ڰ��� ����. 
			push(value); // ������ �ƴϴϱ� Ǫ��
		}
		else { // ������ �κ��� ��� +-*/ ���Ѱ� �ΰ� ������ ���� �� ����
			oper2 = pop(); // ó������ ���� �ι�° �ڸ���
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
	printf("����� ���� ǥ����� �Է��� �ּ��� :");
	
	gets(exp);
	printf("user input %s :", exp);

	result = evalPostfix(&exp);

	printf("result = %d\n", result);
	printf("The End. \n");
}

// ���α׷� ����� 
// result =57 ���;� �ϴµ� �ȳ���.


// gets�� �Է¼��� 369*+�� string ���� �ް� ���� NULL���� �߰��Ͽ� ����
// ����� 