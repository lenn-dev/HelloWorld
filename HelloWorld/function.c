#include <stdio.h>

//���� (main �Լ� ������- why?)
void p(int num);

void function_without_return();
int function_with_return();
void function_without_param();
void function_with_param(int num1, int num2, int num3);
int apple(int total, int ate);
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main_function(void) 
{
	//function
	//����

	//int num = 2; 
	////printf("num�� %d �Դϴ�.\n", num); //2
	//p(num);

	////2 + 3
	//num += 3; 
	////printf("num�� %d �Դϴ�.\n", num); //5
	//p(num);

	////5 * 6
	//num *= 6;
	////printf("num�� %d �Դϴ�.\n", num); //30
	//p(num);

	////30 / 5
	//num /= 5;
	////printf("num�� %d �Դϴ�.\n", num); //6
	//p(num);

	//�Լ�����
	//��ȯ���� ���� �Լ�
	function_without_return();

	//��ȯ���� �ִ� �Լ� 
	int ret = function_with_return();
	p(ret);

	//���ް��� ���� �Լ�
	function_without_param();

	//���ް��� �ִ� �Լ�
	function_with_param(35,27,14);

	//���ް��� ��ȯ���� �ִ� �Լ�
	int ret2 = apple(5, 2); // 5���� ����߿��� 2���� �Ծ����.
	printf("��� 5�� �� 2���� �԰� %d ���� ���Ҿ��\n", ret2);
	printf("�� %d �� ��� �� %d���� �԰� %d �� ���ҽ��ϴ�.\n", 10, 4, apple(10,4));
	

	//���� �Լ�
	int num = 20; 
	num = add(num, 30);
	p(num);

	num = sub(num, 2);
	p(num);

	num = mul(num, 2);
	p(num);

	num = div(num, 2);
	p(num);

	return 0;


}

// ���� (main �Լ� �Ʒ���)
void p(int num) {
	printf("num �� %d �Դϴ�\n", num);
}

void function_without_return() {
	printf("��ȯ���� ���� �Լ��Դϴ�.\n");
}

int function_with_return() {
	printf("��ȯ���� �ִ� �ռ��Դϴ�.\n");
	return 10;
}

void function_without_param() {
	printf("���ް��� ���� �Լ��Դϴ�.\n");
}

void function_with_param(int num1, int num2, int num3) {
	printf("���ް��� �ִ� �Լ��̸�, ���޹��� ���� %d, %d, %d �Դϴ�.\n", 
		num1, num2, num3);
}

int apple(int total, int ate) {
	printf("���ް��� ��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return total - ate;
}

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int div(int a, int b) {
	return a / b;
}