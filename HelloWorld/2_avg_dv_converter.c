#include <stdio.h>
#pragma warning(disable:4996)
int main_avg()
{
	int n, count; // int �� n�� count ���� ����
	float avg, d, sum = 0; // float �� avg, d, sum ���� ����, �ʱ�ȭ
	float list[100];
	printf("����� ������ �ϴ� �������� ������? "); //����� �ȳ��� ���
	scanf_s("%d", &n);// ���� �Է¹޾� ���� n �� ����
	// �Է¹��� �������� ������ŭ ��������
	for (count = 0; count < n; ++count)
	{
		printf("i=%d x=", count + 1); // ���° �Է°����� �˷��ְ�, �Է°� �ޱ�  
		scanf_s("%f", &list[count]); // �迭list �� �Է°� ����
		sum += list[count]; //�Է°��� sum �� �ջ����ֱ�
	}
	avg = sum / n; // ��հ� ���
	printf("The average is %5.2f \n", avg); // 

	for (count = 0; count < n; ++count)
	{
		d = list[count] - avg; //ǥ������ ���
		printf("i = %d  x = %5.2f  d = %5.2f \n", count + 1, list[count], d);
	}
	return 0;
}