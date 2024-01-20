#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int getRandomNum(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void) {

	//���� 5�� �ְ� �� ������ ���� ����� ������� ����
	//������ ���, Ʋ���� ����

	srand((unsigned int)time(NULL));
	int count = 0; //���� ��������


	// int i = 0 ���� �����ϰ� �Ǵ� ��� �Ʒ��� �ִ� getRandomNumber() �Լ��� ����� ��
	// ���޹��� level (�����Լ��� i ��) �� 0 �� ��� rand() �� 0 ���� ���� �������� ���ϰ� �ǹǷ� ������ �߻�
	// for (int i = 1; i <= 5; i++) �� �ٲٱ� 

	for (int i = 1; i <= 5; i++) {

		//random nums
		int num1 = getRandomNum(i);
		int num2 = getRandomNum(i);
		
		//print question("%d x %d ?", num1, num2);
		showQuestion(i,num1, num2);
		

		//answer
		int answer;
		scanf_s("%d", &answer);

		if (answer == -1) 
		{
			printf("���α׷��� �����մϴ�\n");
			//break; ���α׷� ����� ���� ���� ��Ʈ�� �����°� �̻���
			exit(0); // ���⼭ ���α׷� �����϶�� ��
		}
		else if (answer == num1 * num2) 
		{
			//����
			success();
			count++;
		}
		else {
			//����
			fail();
		}

	}
	printf("\n\n ����� 5���� ��й�ȣ �� %d ���� �������ϴ�.\n", count);

	return 0;
}

int getRandomNum(int level)
{
	return rand() % (level * 7) + 1;
}


void showQuestion(int level, int num1, int num2)
{
	printf("\n\n######### %d ��° ��й�ȣ #########\n", level);
	printf("\n\t%d x %d��? \n\n", num1, num2);
	printf("#############################\n");
	printf("\n ��й�ȣ�� �Է��ϼ���. (����: -1)>> \n");
}

void success() {
	printf("\n >>�����Դϴ�.\n");
}
void fail() {
	printf("\n >>Ʋ�Ƚ��ϴ�.\n");
}