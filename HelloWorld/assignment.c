

//#include <stdio.h>
//
//int main()
//{
//	
//
//	/*���� �Է°�(1~100) �� ���� ���� ����ϴ� ���α׷�*/
//	int score = 0; // ����� �Է°� ���� ���� �����ϰ� �ʱ�ȭ
//	char grade; // ���� ���� ����
//	
//	/*����� �Է°� �޾� score������ ����*/
//	printf(" 0��~100�� ������ ������ �Է��ϼ���.\n");
//	scanf_s("%d", &score);
//
//	/*�Է°��� ���� ����ã�� ������ֱ�*/
//	/*switch ���� ��.�Ұ��� ���ϴ� ���迬���� ����� ���Ѵ�.
//	'/' �����ڸ� ����� �������� ������� �����θ� ��µ����� �̸� �̿��Ͽ�
//	1~100 ������ ���� 10���� ������ 0~10 ������ ������ ����� �ش�.
//	���� 59 �� ���ϴ� F�̹Ƿ� case���� 6~10�� ���� 5������ ���� default�� �Ͽ� ���� �� �ִ�.
//	*/
//	switch (score/10) // �Է°��� 10���� �����ִ� ������ �־���
//	{
//	case 10 : case 9: grade = 'A'; // 90�� �̻���� 100�� ���̴� A����
//		break;//�ش�Ǵ� case���� ����ǰ� switch ���� ���������� ���� ������ case�� ���� break���� �־��� 
//	case 8: grade = 'B'; // 80�� �̻� ~ 89�� ���ϴ� B����
//		break;
//	case 7: grade = 'C'; // 70�� �̻� ~ 79�� ���ϴ� C����
//		break;
//	case 6: grade = 'D'; // 60�� �̻� ~ 69�� ���ϴ� D����
//		break;
//	default: grade = 'F'; // ������ ���̽��� F����
//		break;
//
//	}
//	printf("%d���� %c �����Դϴ�.\n", score, grade); // ����� ���
//
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
//	
//
//	/* 1~100 ���� �Է°��� �޾� 1���� �Է°� ������ ¦������ �հ�, Ȧ������ ���� ���ϴ� ���α׷�*/
//	int num = 0; // ����� �Է°� ������ ���� ����, �ʱ�ȭ
//	int odd_total_num = 0; // Ȧ���� �� ������ ���� ����, �ʱ�ȭ
//	int even_total_num = 0; // ¦���� �� ������ ���� ����, �ʱ�ȭ
//
//	/* ����ڿ��� �Է°� �ޱ�*/
//	printf("1~100 ���� ���ڸ� �Է��ϼ��� : \n"); // �Է°� �����ϴ� ���� ���
//	scanf_s("%d", &num); // �Է°� �޾Ƽ� num ������ ����
//
//	/*�Է°��� 1~100 ������ ������ �� �������*/
//	if (num <= 100) {
//		/*�Է°��� 1�� �� ������ �����ϸ鼭, ¦��/Ȧ���� �Ǻ��Ͽ� 
//		������ ����( odd_total_num �� even_total_num)�� ��� �����ֱ�*/
//		while (num >= 1) {
//			/*�Է°��� 2�� ���� ������ ���� 1�� ���� Ȧ��, 0�϶��� ¦��*/
//			if (num % 2 == 1) { // ���������� 1�̶�� Ȧ��
//				odd_total_num = odd_total_num + num; // Ȧ�� ������ ��� ������
//			}
//			else if (num % 2 == 0) { // ������ ���� 0�̶�� ¦��
//				even_total_num = even_total_num + num; // ¦�� ������ ��� ������	
//			}
//			/*������ ���� �� �Է°����� 1�� ���༭ (1 ~ �Է°�) ������ ���� 
//			�ϳ��ϳ� ¦��/Ȧ�� �Ǻ��� �����ִ� ������ �ݺ����ֱ�
//			while���� �Է°��� 0�� �Ǿ��� �� ������ ���߰� ��*/
//			num--;
//		}
//		/*while�� ���� ���� �� ������ ������ ������ ¦��/Ȧ�� ���� ���� ���*/
//		printf("Ȧ�� ���� �� �հ� : %d \n", odd_total_num); 
//		printf("¦�� ���� �� �հ� : %d \n", even_total_num);
//	}
//	/*�Է°��� 1~100 ������ ���ڰ� �ƴ� ��쿡 ����� ����ϱ�*/
//	else {
//		printf("�Է°��� 100�� �ѽ��ϴ�\n");
//	}
//	return 0;
//}