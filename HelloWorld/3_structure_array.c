
/*����ü �迭�� ����� ���α׷�*/ 
#include <stdio.h> // �������� ����ó����, ����� �Լ� ó���ϱ� ���� �������
#pragma warning(disable:4996) // ���� �� ��� ����

/*����ü entry ����*/
struct entry 
{
	//fname, lname, phone �� ����ü ����� ����
	char fname[20]; // 20���� ���̸� ���� ������ �迭, fname�� entry ����� ����
	char lname[20]; // 20���� ���̸� ���� ������ �迭, lname�� entry ����� ����
	char phone[10]; // 10���� ���̸� ���� ������ �迭, phone�� entry ����� ����
};

struct entry list[4];// 4���� ���νŻ������� �����ϱ� ���� entry ����ü �迭 list ����
int i; // ������ i ���� ����

void main_struct() // main().�Լ��� ����
{
	
	for (i = 0; i < 4; i++) // ����ü �迭 list ���� ��ŭ for���� ����
	{
		printf("Enter first name : ");// fname �Է°��� �ޱ� ���� ����� �ȳ��� ���
		scanf("%s", list[i].fname); // �Է°��� i��° list �� fname �������� ����
		printf("Enter last name : ");// lname �Է°��� �ޱ� ���� ����� �ȳ��� ���
		scanf("%s", list[i].lname);// �Է°��� i��° list �� lname �������� ����
		printf("Enter phone number : ");// phone �Է°��� �ޱ� ���� ����� �ȳ��� ���
		scanf("%s", list[i].phone);// �Է°��� i��° list �� phone �������� ����
		printf("\n"); //  �ش��ε����� ��ҵ��� ��� �� �ٹٲ����� ����
	}
	printf("\n");// �ٹٲ�

	// ����Ʈ�� �Էµ� ���� �ٸ� �������� ���
	for (i = 0; i < 4; i++)
	{
		printf("Name : %s %s", list[i].fname, list[i].lname); // list ����ü�迭�� i��° �࿡ fname�� lname�� ��Ʈ�����ڸ� �̿��� ����
		printf("\t\tphone : %s \n", list[i].phone); // Name��� �� �ٹٲ� ���� �ι��� ���̵� �� list[i]�� phone �� ����� �� �ٹٲ�.
	}
}

