
/*����ü �迭�� ����� ���α׷�*/ 
#include <stdio.h>
#pragma warning(disable:4996)

/*����� ���� �ڷ����� ����ü�� ����*/
struct entry 
{
	//fname, lname, phone �� ����ü ����� ����
	char fname[20]; // 20���� ���̸� ���� char�� �迭 ����
	char lname[20]; // 20���� ���̸� ���� char�� �迭 ����
	char phone[10]; // 10���� ���̸� ���� char�� �迭 ����
};

// 4���� ���νŻ������� �����ϱ� ���� ����ü �迭 ����
struct entry list[4];
int i;

void main_struct()
{
	//�Է°��� �޾� ����ü�� ��Ҹ� ���鼭 �迭�� �ʱ�ȭ ����
	for (i = 0; i < 4; i++)
	{
		printf("Enter first name : ");// fname �Է°��� �ޱ� ���� ����� �ȳ��� ���
		scanf("%s", list[i].fname); // �Է°��� i��° list �� fname �������� ����
		printf("Enter last name : ");// lname �Է°��� �ޱ� ���� ����� �ȳ��� ���
		scanf("%s", list[i].lname);// �Է°��� i��° list �� lname �������� ����
		printf("Enter phone number : ");// phone �Է°��� �ޱ� ���� ����� �ȳ��� ���
		scanf("%s", list[i].phone);// �Է°��� i��° list �� phone �������� ����
		printf("\n"); // �ٹٲ�
	}
	printf("\n");// �ٹٲ�

	// ����Ʈ�� �Էµ� ���� �ٸ� �������� ���
	for (i = 0; i < 4; i++)
	{
		printf("Name : %s %s", list[i].fname, list[i].lname);
		printf("\t\tphone : %s \n", list[i].phone);
	}
}

