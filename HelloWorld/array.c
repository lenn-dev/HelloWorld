# include <stdio.h>

int main_array(void) {

	//�迭 �������� ������ ���ÿ� ����
	/*int subway_array[3];
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	

	for (int i = 0; i < 3; i++) {
		printf("����ö %d��° ĭ�� %d���� Ÿ�� �ֽ��ϴ�.\n", i, subway_array[i]);
	}*/


	// �� ���� ���
	// ���� �������� ������ ���̰��� ��µȴ�.
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}*/

	//�迭 ũ��� �׻� ����� ����
	/*int size = 10; //�̷��� ���� �ȵ�
	int arr[10];*/


	// ���� �ϳ��� �����ϸ� �� ���� ���� 0���� ������
	/*int arr[10] = { 1,2 };
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}*/

	//int arr[] = { 1,2 }; // arr[2]


	/*float arr_f[5] = { 1.2, 5, 3.4, 2 };
	for (int i = 0; i < 5; i++) {
		printf("%.2f\n", arr_f[i]);
	}*/

	//���� vs ���ڿ�
	/*char c = 'A';
	printf("%c\n", c);*/

	//���ڿ� ������ '��'�� �ǹ��ϴ� NULL ���� '\0'�� �����ؾ���
	// ��ĭ ����ζ�� ��
	//char str[6] = "coding"; //[c][o][d][i][n][g]
	//char str[7] = "coding"; //[c][o][d][i][n][g]
	//printf("%s\n", str); // �ε��� �ʿ���� s�� ���Ե� ��� ĳ���� ��µ�
	

	//char str[] = "coding"; //[c][o][d][i][n][g]
	////printf("%s\n", str); //coding
	////printf("%d\n", sizeof(str));//7

	//for (int i = 0; i < sizeof(str); i++) {
	//	printf("%c\n", str[i]);
	//}

	
	//���� �ѱ��� 1 byte
	//�ѱ� 1���� 2 byte
	//char ũ�� : 1 byte
	//char kor[] = "�����ڵ�";
	//printf("%s\n", kor);
	//printf("%d\n", sizeof(kor)); //9 


	/*char c_arr[7] = { 'c','o','d','i','n','g'};
	char c_arr[6] = { 'c','o','d','i','n','g' };
	printf("%s", c_arr);*/

	//�迭 ����� �� ũ�� ����� ������ �Բ� ��µ�
	/*char c_arr[10] = { 'c','o','d','i','n','g' };
	printf("%s\n", c_arr);
	for (int i = 0; i < sizeof(c_arr); i++) {
		printf("%c\n", c_arr[i]);
	}*/

	//���ڿ��� ���������� ����ϸ� ASCII �ڵ� �� ����� �Ǽ�
	//NULL �κ��� 0���� ��µ�
	/*for (int i = 0; i < sizeof(c_arr); i++) {
		printf("%d\n", c_arr[i]); 
	}*/


	//���ڿ� �Է¹ޱ� :������ �������� ����
	/*char name[256];
	printf("�̸��� ������?");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);*/


	// ���� : ASCII �ڵ�? ANSI (�̱�ǥ����ȸ)���� ������ ǥ�� �ڵ�ü��
	//7bit, �� 128�� �ڵ� (0-127)
	// a : 97 (���� a �� �ƽ�Ű�ڵ� ������
	// A : 65
	// 0 : 48
	/*printf("%c\n", 'a');
	printf("%d\n", 'a');

	printf("%c\n", 'A');
	printf("%d\n", 'A');

	printf("%c\n", '\n');
	printf("%d\n", '\n');

	printf("%c\n", '0');
	printf("%d\n", '0');

	printf("%c\n", '1');
	printf("%d\n", '1');*/


	//����2 : 0-127 ������ �ƽ�Ű�ڵ� �������� �ش��ϴ� ���� Ȯ��
	for (int i = 0; i < 128; i++) {
	printf("�ƽ�Ű�ڵ� ���� %d : %c\n",i,i);
	}

	return 0;
}