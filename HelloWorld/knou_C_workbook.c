//comment ó�� CTRL + K + C  
//Uncomment ó�� CTRL + K + U 


// 1�� c ����� ����=========================================

// �� ���� �� ��� ���α׷�

////�μ��� �� ����ϴ� ���α׷�
////����ó����
//#include <stdio.h>
////��������
//int product(int x, int y);
////�����Լ�(�ʼ�)
//void main() 
//{
//	int a, b, c;
//	printf("enter a number between 1 and 100: ");
//	scanf_s("%d", &a);
//	printf("enter a number between 1 and 100: ");
//	scanf_s("%d", &b);
//	c = product(a, b);
//	printf("%d * %d = %d", a, b, c);
//
//}
////ȣ���Լ�
//int product(int x, int y) {
//	return (x * y);
//}

// ȭ���� ������ ��ȯ����ϴ� ���α׷�

//// ȭ��/���� ��ȯ ���α׷�
//#include <stdio.h>
//
////��� ����
//#define frozen_degree 32.0
//#define range 1.8
//
//void main()
//{
//	float fa, ce;
//	printf("Enter Fahrenheit temperature: ");
//	scanf_s("%f", &fa);
//	//ȭ�� ���� ��ȭ ����
//	// ���� = (ȭ�� - 32 ) /1.8
//	ce = (fa - frozen_degree) / range;
//	printf("Celsius equilvalent:  %f\n", ce); //�Ҽ��� 6�ڸ� (���� �ݿø���)
//	printf("Celsius equilvalent:  %.0f\n", ce); //�Ҽ��� 0�ڸ�
//	printf("Celsius equilvalent:  %.1f\n", ce); // �Ҽ��� 1�ڸ�
//	printf("Celsius equilvalent:  %.3f\n", ce); // �Ҽ��� 3�ڸ�
//	return 0;
//}




// 2�� �ڷ����� ����ó����=====================================

// ���, ���� ���ǿ� ����

////���,���� ���ǿ� ���� ���� ���α׷�
//#include <stdio.h>
//// ��ũ������ �̿��� �������
//#define PI 3.141592
////const �̿��� �������
//const int K = 10;
//
//void main()
//{
//	double a; // �Ǽ��� a ��������
//	a = K + PI;
//
//	// K = 20;  
//	// K�� ������̹Ƿ� ���� ��ȭ��Ű�� �����߻� 
//	printf("%f\n", a);
//
//	int x, y, z;  //���� x,y,z ���� (�����ڷ���)
//	x = 10; // ������ �� �Ҵ�
//	y = 20;
//	z = x + y; 
//	printf("%d", z);
//
//
//	return 0;
//}

//�ڷ����� ����


////�ڷ����� ����
//#include <stdio.h>
////��ũ�� �̿��� ������, �Ǽ���, ������ �������
//#define AGE 28
//#define PI 3.141592
//#define NAME "ȫ�ٳ�"
//
////const �� �̿��� ������,�Ǽ���,������, ���ڿ� �������
//const int a = 10;
//const float b = 10.56789;
//const char c = 'K';
//const char* UNI ="�����ᶱ���б�";
//void main()
//{
//	// ������,�Ǽ���,������,���ڿ� ���� ����
//	int age = 28;
//	float grade = 4.0; 
//	char mark = 'A'; //���ڴ� Ȭ����ǥ
//	char name[10] = "ȫ�ٳ�"; // ���ڿ��� �ֵ���ǥ
//	char* department = "computer science";
//
//	//����� ���
//	printf("�б���: %s �̸��� %s ���̴� %d\n\n",UNI,NAME,AGE); 
//	//������ ���
//	printf("%s %s ����:%d ���� %c ����%.0f\n\n", name, department, age, mark, grade);
//}


//�ڷ����� ����(10������ 11������ ������ ��)

////�ڷ����� ����(10������ 11������ ������ ��)
//#include <stdio.h>
//void main()
//{
//	short int i, sum1 = 0; 
//	int sum2 = 0;
//	double sum3 = 0;
//
//	for(i = 10000; i < 11000; i++)
//	{
//		sum1 = sum1 + i;
//		sum2 = sum2 + i; 
//		sum3 = sum3 + i;
//	}
//
//	printf("10,000~11,000�� ��(short int)=%d\n", sum1);
//	printf("10,000~11,000�� ��(int)=%d\n", sum2);
//	printf("10,000~11,000�� ��(double)=%f\n", sum3);
//
//	
//}
////������
////10,000~11,000�� ��(long )= 13740 //���� ����� ����(short int ������ -32768~32767)
////10,000~11,000�� ��(float )= 10499500
////10,000~11,000�� ��(double )= 10499500.000000



//[ ����ó���� ] ��ũ�� �Լ� ����

////��ũ�� �Լ� ����
//#include <stdio.h>
//// ��ũ�� �μ� ���ǽ� ��ȣ ��� ����
//#define sum1(x,y) x + y
//#define sum2(x,y) ((x)+(y))
//#define multiply1(x,y) x * y
//#define multiply2(x,y)((x)*(y))
//
//#define MAX(x,y) x>y?x:y //�ִ밪 ���ϴ� ��ũ�� �Լ�
//#define MIN(x,y) x<y?x:y //�ּҰ����ϴ� ��ũ���Լ�
//
//void main()
//{
//	int a, b, c, d;
//	a = 10 * sum1(3, 4); // a = 10*3+4 = 34
//	b = 10 * sum2(3, 4); // b = 10*((3)+(4)) = 70
//	c = multiply1(1 + 2, 3 + 4); //c = 1 + 2 * 3 + 4 = 11
//	d = multiply2(1 + 2, 3 + 4); //d = (1+2) * (3+4) = 21
//
//	printf("a = %d, b = %d\n", a, b);
//	printf("c = %d, d = %d\n", c, d);
// 
//	printf("�ִ밪 : %d\n", MAX(10,20);
//	printf("�ּҰ� : %d\n", MIN(10,20);
//	return 0;
//}


//[ ����ó���� ] ���Ǻ� ������ ���

////���Ǻ� ������ ��� ��
//#include <stdio.h>
//#define CONDITION 1
//void main()
//{
//#if CONDITION
//	printf("\n A���α׷��� ������");
//#else
//	printf("\n B���α׷��� ������");
//#endif	
//	return 0;
//}
//// ������ ���̹Ƿ� ���� A���α׷��� �����ϵ�


//factorial.h ������� ���� ����ó���� �κп� include �ϱ�


//#include <stdio.h> // scanf(), prinf() ������� ��������
//#include <conio.h>  // ǥ���Լ� getch()������� ��������
//#include "factorial.h" // ��������� ������� ����
//
//void main()
//{
//	int x;
//	printf("Enter number you want to factorial: ");
//	scanf_s("%d", &x); // scanf�� scanf_s �� ���־�� �����ȳ�
//	printf("%d ! = %d", x, factorial(x));
//	_getch(); // getch()�� _getch() ����� �����ȳ�
//	//gets(); // Ű���� ���� ���ڿ� �Է�
//	
//}


// [ ����ó���� ] ��ũ�� ���� �������α׷�

//#include <stdio.h>
//#define SIZE 100
//
//#if defined SIZE
//#undef SIZE
//#define SIZE 200
//#else
//#define SIZE 300
//#endif
//
//void main()
//{
//	printf("SIZE: %d\n", SIZE);
//	return 0;
//}



// 3. ������Լ��� ������==================================

// ǥ�� ������Լ�

//printf() �Լ��� ��
// ��¾�� ��ȯ��ȣ
// %d ������, %f �Ǽ���, %e,%E �Ǽ���(������), %c ������, 
// %s ���ڿ�������, %o 8����, %x,%X 16����

//#include <stdio.h>
//void main()
//{
//	char c = 'A';
//	int i = 10, j = 20, k = 30;
//	printf("������ ��� ���α׷�\n");
//	// ���� c�� ��� �ڷ����� ���� ����� �޶���.
//	printf("c=%c, c�� �ƽ�Ű �ڵ尪�� %d\n", c, c);
//	printf("i=%d, j=%d, k=%d", i, j, k);
//	return 0;
//}

// ��¾������ (����)

//#include <stdio.h>
//void main()
//{
//	int a = 123;
//	float b = 123.45;
//	printf("|%d|\n", a);	//|123|
//	printf("|%5d|\n", a);	//|  123|  //��5�ڸ� �����ʺ���
//	printf("|%-5d|\n", a);  //|123  |  //��5�ڸ� ���ʺ���
//	printf("|%05d|\n", a);  //|00123|  //��5�ڸ� �����ʺ���,������0����
//	printf("|%6.1f|\n", b); //| 123.4| //��6�ڸ� �Ҽ�������1�ڸ�
//	printf("|%07.2f|\n", b);//|0123.45|//��7�ڸ� �Ҽ�������2�ڸ�,������0
//
//	return 0;
//}


//scanf_s() �Լ��ǿ�
//�Է¾�� ��ȯ��ȣ
// %d ������, %ld long������, %f �Ǽ���, %lf double�Ǽ���, 
// %c ������, %s ���ڿ�

//#include <stdio.h>
//#pragma warning(disable:4996)
//void main()
//{
//	int a,b;
//	float c,d;
//	printf("������ �Է��ϼ���\n");
//	scanf_s("%d %d", &a, &b);
//	printf("�Ǽ��� �Է��ϼ���\n");
//	scanf_s("%f %f", &c,&d);
//	printf("\n������ %d %d\n", a, b);
//	printf("�Ǽ��� %f %f\n", c, d);
//	
//	return 0;
//}


//getchar() �Լ������ ��

//#include <stdio.h>
//void main()
//{
//	char a;
//	printf("���� �ϳ��� �Է��ϼ���\n");
//	a = getchar(); // �ѹ��ڰ� �ԷµǸ� ������ ���� a�� ����
//	printf("a=%c\n", a);
//	return 0;
//}

//putchar()�Լ� ����� ��

//#include <stdio.h>
//void main()
//{
//	char var = 'A';  //���� ����
//	putchar(var);    //A
//	putchar(var + 1);//A + 1 =  65 + 1 = 66 (�ƽ�Ű�ڵ� B)
//	putchar('\n');   //�ٹٲ�
//	putchar('K');    //K
//	putchar('K' + 2);//K + 2 = (����) = ���ĺ� K�� �ٴ�����° ���ĺ��� M ���߰���
//	putchar('\007'); //\007 = \a (�����alert ��Ÿ���� �����)
//
//	return 0;
//}


//���ڿ� �����Է� gets() puts()
//gets() �Լ� ��� ��

