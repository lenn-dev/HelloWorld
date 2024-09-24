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


#define STACK_SIZE 6
#include <stdio.h>

typedef int element;
element stack[STACK_SIZE]; // 50��¥�� ���û���
int top = -1; // ������ �� ���� ���� -1


void PrintStack() { // ���ð� ���
	int i;
	printf("\n STACK ���� : \n");
	// �� �Ʒ� �ε���[0] �� TOP
	for (i = STACK_SIZE - 1; i >= 0; i--) {
		printf("[%d]=%5d\n", i, stack[i]);
	}
	printf("\n");
	printf("\n");
}


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
		//return;
	}
	else {
		stack[++top] = item; // top�� �����ڸ��� item����
		
		PrintStack(); // Ȯ���Ϸ��� ����Լ� ������
	}
}

// ���� ǥ���(369*+)�� ����ϴ� ����
// C���α׷����� �迭�� ���� ������ ������ �ڷ����� ���� ��. 
// �����ڴ� �����̱� ������ 369�� string�� �ν��� �� ��ȯ
element evalPostfix(char* exp) { //���� ���� �Լ�
	int oper1, oper2, value, i=0;
	int length = strlen(exp); // �Էµ� ������ ���� 369*+ => 5
	char symbol;
	
	//printf("%d \n",length); /

	for (i=0; i < length; i++) {
		symbol = exp[i]; //�Էµ� �迭 369*+ �� �ε����ش� �� ����
		if (symbol != '+' && symbol != '-' && symbol != '*' && symbol != '/') {
			value = (int)symbol - '0'; // ���ڸ� ���ڷ� �ٲ�, 0�� �ƽ�Ű ���� ���������� ���� ���ڰ��� ����. 
			// ���� ���� ��ȯ�� ����Ͽ� ���� '369'�� ������ ��ȯ�� ���� ���� '0'�� ASCII �ڵ� ���� ���� ���� 369�� ����ϴ�.
			
			//printf("%d \n", value);
			push(value); // ������ �ƴϴϱ� Ǫ�� , push() �Լ� ȣ��
		}
		else { // ������ �κ��� ��� +-*/ ���Ѱ� �ΰ� ������ ���� �� ����
			oper2 = pop(); // ó������ ���� �ι�° �ڸ���
			oper1 = pop();
			switch (symbol) {
				
				case '+': push(oper1 + oper2); break;
				case '-': push(oper1 - oper2); break;
				case '*': push(oper1 * oper2); break;
				case '/': push(oper1 / oper2); break;
			}
		}
	}
	return pop();
}

void main_stack() {
	createStack(STACK_SIZE);
	int result;
	char exp[6];
	
	printf("����� ���� ǥ����� �Է��� �ּ��� :");
	gets(exp);
	//printf("user input %s :", exp);

	result = evalPostfix(&exp); // �Է¹��� ��Ʈ�� �ּҰ� �Ű������� evalPostfix �Լ� ȣ��

	printf("result = %d\n", result);
	printf("The End. \n");
}

// ���α׷� ����� 
// result =57 ���;� �ϴµ� �ȳ���.
// ������Ʈ �Ӽ� C/C++ ��� ������ ���� �ٲ㵵 �ȵ�

// ������ ������ �ƴ϶� push�Լ� ���� swith ������ 
// �����ڸ� '+'��� '+ '�̷��� �ؼ� �ν��� ���ϴ� �ſ���....

