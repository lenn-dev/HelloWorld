#include <stdio.h>
int main_loop(void)
{
	//printf("Hello World");

	//++ �Ի�
	/*int a = 10;
	printf("a�� %d\n", a);
	a++;
	printf("a�� %d\n", a);
	a++;
	printf("a�� %d\n", a);*/


	//int b = 20; 
	////b = b+1;
	//printf("b�� %d\n", ++b);//21
	//printf("b�� %d\n", b++);//21 ��� �� 1���ؼ� b���� 22
	//// b++�� ������ �����ڿ� ���϶�� ��
	//// ���� 
	//printf("b�� %d\n", b);// ���� b ��½� 22


	//�ݺ���
	//for, while, do while

	//for (����; ����; ����)
	/*for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i);
	}*/


	//while (����) { }
	//int i = 1; 
	//while (i <= 10)
	//{
	//	printf("Hello World %d\n", i++);
	//	//i++;
	//}


	//do { } while (����);
	/*int i = 1; 
	do {
		printf("Hello World %d\n", i++);
	} while (i<= 10);*/


	//2�� �ݺ��� 
	
	//������ �����
	/*for (int i = 2; i <= 9; i++)
	{
		printf(" <������ %d ��>\n", i);
		
		for (int j = 1; j <= 9; j++)
		{
			printf(" %d", i*j);
		}
		printf("\n");
		printf("\n"); 
	}*/
	//�Ʒ� �� �ڵ��� ���̰� �ֳ�?
	//printf("%d * %d = %d\n", i, j, i * j); 
	//printf(" %d", i*j);


	//���� �Ƕ�̵� ���
	/*for (int i = 0; i <= 5; i++) 
	{
		for (int j = 0; j <= i; j++) {
			printf("*" );
		}
		printf("\n");
	}*/

	//��Ī�� �Ǵ� �Ƕ�̵� ���
	/*for (int i = 0; i <= 5; i++)
	{
		for (int j = i; j <= 5-1; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}*/



	//�Ųٷ� �� �Ƕ�̵� ���
	/*for (int i = 5; i >= 0; i--)
	{
		for (int j = 0; j <= i; j++) {
			printf("*" );
		}
		printf("\n");
	}*/


	// �Ƕ�̵� �ױ�
	/*
	    *
	   ***
	  *****
	 *******
	*********
	*/
	int num; 
	printf("�� ������ �װڴ���?");
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++)
	{
		for (int j = i; j < num-1; j++) {
			printf(" ");
		}
		for (int k = 1; k <= i* 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	// int k =0 �� �� ���ϴ� ��� ������ ����

	
	return 0;
}