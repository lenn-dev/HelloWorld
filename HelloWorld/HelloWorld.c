#include <stdio.h>

 //����� ���� ���� ctrl+fn+f5
// comment/uncomment ctrl+k,c / ctrl+k,u
int main_printfscanf(void)
{
	//������ ���� 
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	//�Ǽ��� ����
	//%f �Ǽ���
	//%.2f �Ҽ��� ��°�ڸ����� 
	/*float f = 46.5; 
	printf("%.2f\n", f);*/  

	//double
	/*double d = 4.456;
	printf("%.2lf\n", d);*/

	//��� (������ �ʴ� ��): �빮�ڷ� ó��
	// �տ� const �ٿ���
	/*const int YEAR = 2000;
	prinf("�¾ �⵵ : %d\n", YEAR);*/

	//printf
	//����
	//int add = 3 + 7; //10
	//	printf("3 + 7 =%d\n", add);
	//	printf("%d + %d =%d\n", 3, 7, 3 + 7);
	//	printf("%d x %d =%d\n", 3, 7, 3 * 7);

	//scanf
	//Ű���� �Է��� �޾Ƽ� ����
	//�Է¹��� ������ �տ� & ���̱�
	/*int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);*/

	/*int one, two, three; 
	printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù��° �� : %d\n", one);
	printf("�ι�° �� : %d\n", two);
	printf("����° �� : %d\n", three);*/

	//����(�� ����)
	/*char c = 'A';
	printf("%c\n", c);*/

	//���ڿ�(�� ���� �̻�)
	//���ڿ� �������� & �Ⱥ��̰�, ������ ��������� �� sizeof
	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);*/


	//������ ���� �ۼ��ϱ�
	//������Ʈ: �������� �������� ���� �Լ�
	// �̸�? ����? ������? Ű? ���˸�
	char name[256];
	printf("�̸��� ������?");
	scanf_s("%s", name, sizeof(name));
	
	int age;
	printf("�� �� �̿���?");
	scanf_s("%d", &age);
	
	float weight;
	printf("�����Դ� �� kg�̿��� ? ");
	scanf_s("%f", &weight);
	
	double height;
	printf("Ű�� �� cm ����?");
	scanf_s("%lf", &height);
	
	char crime[256];
	printf("���� ���˸� ����������?");
	scanf_s("%s", crime, sizeof(crime));

	//���� ���� ���
	printf("\n\n---������ ����---\n\n");
	printf("�̸�   :%s\n", name);
	printf("����   :%d\n", age);
	printf("������   :%.2f\n", weight);
	printf("Ű   :%.2lf\n", height);
	printf("�����׸�   :%s\n", crime);




	
	return 0;
}

