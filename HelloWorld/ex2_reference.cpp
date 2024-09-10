#include <iostream>
#include <string>
using namespace std;



// �ΰ��� ���� ���� �ڹٲٴ� swap �̶� �Լ��̱� ������ 
// call by value�� �ϸ� �ǹ̰� ����.  
void swapb(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}



int main_rvalue() {

	// 2. c++ basic grammer=======================================================

	int c = 10; // int a(10); same
	// a(5); cannot do this way, as we don't know it's function or variable
	int d(c + 5);
	cout << "c =" << c << endl;
	cout << "d =" << d << endl;


	// for loop (range base?)
	int arr[10] = { 3,2,3,4,5,6,6,7,8,4 };

	// normally do this way 
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}

	// see each in array as a variable
	for (int n : arr) {
		cout << n << ' ';
		n++;
	}
	cout << endl;
	// but there is no change n value with n++;
	// n is like   int n = arr[6];
	// so it doesn't change the value of arr[6]
	for (int n : arr) {
		cout << n << ' ';
	}
	cout << endl;

	// when you add before n,, then it will change the value
	// using reference variable like pointer
	for (int& n : arr) {
		cout << n << ' ';
		n++;
	}
	cout << endl;
	for (int n : arr) {
		cout << n << ' ';
	}
	cout << endl;



	for (int n : arr) {
		cout << n + 1 << ' ';
	}
	cout << endl;

	// ������ *
	// int *p = &a;
	// *p =10;    
	// p�� ����Ű�� ���� a�� ���� 10���� �ٲ���.

	//���۷��� & ���� reference
	// int &p = a;
	// p = 10; 
	// �̷��Ը� ��� p�� ����Ű�� ���� a�� ���� 10���� �ٲ���

	int g(5); // g ������ 5�� �ʱ�ȭ
	int& p = g; // ���۷��� ���� p �� g�� ����Ŵ
	p = 10; // p�� ���� 10���� �����ϸ�, p�� ����Ű�� g�� ���� ����

	cout << p << endl;
	cout << g << endl;

	// �ΰ��� ���� ���� �ڹٲٴ� swap �̶� �Լ��̱� ������ 
	// call by value�� �ϸ� �ǹ̰� ����.  
	int a(5),b(7);
	
	swap(a,b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	// r-value &&
	// ���۷��� ����� 3�̳� ������ ������ �� ����
	// ��ȣ�� �������� ������ r-value ���Ҽ� ���� ����, 
	// ���ʤ�-value ���� �� �ִ� ��� 
	// ������ ���۷��� & ���� && ���̸� �װ��� ���� �� ���� ����� �Ǿ 
	// ������ ������
	//int a(5);
	//int&& r1 = a;
	int&& r2 = 3;
	int&& r3 = a * a;

	// �̰� �տ� for ���� ������ ���� n ���� �տ� & ���̸�
	// ������ ����Ű�� ������ ���� ���� ��ų �� �־���.

	return 0;

}
