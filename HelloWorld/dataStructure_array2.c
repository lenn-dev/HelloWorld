//// �ڷᱸ�� 2�� �迭
//// 2���� �迭 
//// ��켱�Ҵ�, ���켱 �Ҵ� : ���� ����, ������ 1���� �迭������ �޸� �켱�Ҵ�
//// ������
////#pragma warning(disable:4996)
//
//#include <stdio.h>
//#define col 3 // �迭�� �� ������
//#define row 4 //�迭�� �� ������
//
//int a[col][row]; // �迭�� ���������� ����
//
//void arrayCreate2() {
//	int i,j;
//	printf("�迭�� �ʱⰪ�� �Է��ϼ���. \n");
//
//	for (int i = 0; i < col; i++) {
//		printf("\n");
//		for (int j = 0; j < row; j++) {
//			printf("a[%d][%d] : ", i, j);
//			scanf_s("%d", &a[i][j]);
//		}
//	}
//	printf("�迭�� �ʱⰪ�� �����Ǿ����ϴ�. \n\n");
//}
//
//void arrayPrint() { //�Էµ� �迭 �� ����ϴ� �Լ�
//	int i,j;
//	printf("2���� �迭�� �Էµ� ���� ������ �����ϴ�. \n\n");
//
//	for (int i = 0; i < col; i++) {
//		printf("[");
//		for (int j = 0; j < row; j++) {
//			// 5�� ĭ ����� ������ �����Ͽ� ���, tapŰ ��ŭ ����߻�
//			printf("%5d", a[i][j]);
//		}
//		printf("]\n");
//	}
//}
//
//void main_2dim_array() {
//	printf("�� ���α׷����� 2���� �迭�� ũ��� [%d][%d] �Դϴ�. \n", col, row);
//
//	arrayCreate2();
//	arrayPrint();
//
//	printf("The End \n");
//}