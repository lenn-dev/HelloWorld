//�ڷᱸ�� array 
// scnaf �� scanf_s�� �ٲ���� ������
// debug asserttion faild =�Է¹��� ���� ������ ������ & �ٿ��� ��
//#progma warning(disable:4996)

#include <stdio.h>
#define array_size 5 // �迭�� ����� �̸� ����

int a[array_size]; // �迭�� ���������� ����

void arrayCreate() {
	int i;
	//������ �迭�� for loop���鼭 ���� �Ҵ�����
	for (i = 0; i < array_size; i++) {
		printf("�迭�� �ʱⰪ�� �Է��ϼ���. a[%d] : ", i);
		scanf_s("%d", &a[i]);
	}
	printf("�迭�� �ʱⰪ�� �����Ǿ����ϴ�. \n\n");
}

void retrieve() { // ����ڰ� �Է��� �迭 ��ġ��(�ε���)�� ����� ���� �˷��ִ� �Լ�
	int s;

	printf("���� �˰��� �ϴ� �迭 ��ġ���� �Է��ϼ���(0~4) : ");
	scanf_s("%d", &s);

	// �迭�� ũ�� �ȿ��� �˻��ϰ� ���� ���
	if (s >= 0 && s < array_size) {
		printf("a[%d]��° ��ġ�� �ִ� ���� %d�Դϴ�. \n\n", s, a[s]);
	}
	else {
		printf("Error \n");
	}
}

void arraySearch() { // �迭�� ����� �� �߿� ����ڰ� ã���� �ϴ� ���� �ִ��� �˻����ִ� �Լ�
	int i;
	int result = 0;
	int value = 0;
	printf("�Է��� �� �߿��� �˻��ϰ��� �ϴ� ���� �Է��ϼ��� : ");

	scanf_s("%d", &value);

	for (i = 0; i < array_size; i++) {
		if (a[i] == value) {
			printf("�迭 a[%d]��° %d���� �˻��Ǿ����ϴ�. \n", i, value);
			result = 1;
		}
	}
	if (result == 0) printf("ã���� �ϴ� ���� �����ϴ�. \n");
}

void main_ds_array1() {
	// �迭 ����� �̸� ������
	printf("�� ���α׷����� �迭�� ũ��� %d�Դϴ� \n", array_size);

	arrayCreate();
	retrieve();
	arraySearch();

	printf("The End \n");
}