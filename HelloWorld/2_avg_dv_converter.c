
/* n���� �Ǽ��� �Է¹޾� ���, ǥ������ ���ϴ� ���α׷� */
#include <stdio.h>
#pragma warning(disable:4996)
void main_avg()
{
	int n, count; // int�� n�� count ���� ����
	float avg, d, sum = 0; // float�� avg,d,sum ���� ����� ���ÿ� 0���� �ʱ�ȭ
	float list[100]; // 100�� ���̸� ���� float�� �迭 ���� list ����
	printf("����� ������ �ϴ� �������� ������? "); //����� �ȳ��� ���
	scanf_s("%d", &n);// ���� �Է¹޾� ���� n�� ����
	
	// �Է¹��� �������� ������ŭ �������� �Է°� �����ֱ�
	for (count = 0; count < n; ++count)
	{
		printf("i = %d  x = ", count + 1); // ���° �Է°����� �˷��ְ�, ����ڿ��� �Է°� ������� �ȳ��� ���  
		scanf_s("%f", &list[count]); // �迭 list �� �ش� �ε����� �Է°� ����
		sum += list[count]; //�Է°��� sum ������ �ջ����ֱ�
	}
	avg = sum / n; // �ջ��� �� sum ���� ��հ� ���
	printf("The average is %5.2f \n", avg); // ��հ� avg�� �� 5�ڸ��� �Ҽ��� ���� 2�ڸ� ���

	// list �������� ǥ������ ���
	for (count = 0; count < n; ++count)
	{
		d = list[count] - avg; // ������ �Է°��� ���� ǥ�������� ����Ͽ� d ������ ����
		printf("i = %d  x = %5.2f  d = %5.2f \n", count + 1, list[count], d); // �Է¼���, �Է°�, ǥ�������� ���
	}
	
}

