#include <stdio.h>

//���� (main �Լ� ������- why?)
void p(int num);

int main(void) 
{
	//function
	//����

	int num = 2; 
	//printf("num�� %d �Դϴ�.\n", num); //2
	p(num);

	//2 + 3
	num += 3; 
	//printf("num�� %d �Դϴ�.\n", num); //5
	p(num);

	//5 * 6
	num *= 6;
	//printf("num�� %d �Դϴ�.\n", num); //30
	p(num);

	//30 / 5
	num /= 5;
	//printf("num�� %d �Դϴ�.\n", num); //6
	p(num);

	return 0;
}

// ���� (main �Լ� �Ʒ���)
void p(int num) {
	printf("num�� %d �Դϴ�\n", num);
}