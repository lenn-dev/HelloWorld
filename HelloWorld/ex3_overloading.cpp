
// �Լ� overloading �Լ���������
#include <iostream>

//using namespace std;
// swap �Լ� ����� �ǵ� using namespace std; �ȿ� �� ����.
// �׷��� �̹����� �����ϰ� ����

void swap(int& a, int& b) {
	int tmp = a; 
	a = b; 
	b = tmp;
}
// ������ ��Ʈ�� ���ڷ� �޴½����Լ��� ���� ������
//�������� �޴� �����Լ� �� ����
void swap(double& a, double& b) {
	double tmp = a;
	a = b;
	b = tmp;
}
//�� ������ (�ȿ� ��� �ִ� �ּҰ�) �ڹٲٴ� �Լ�
void swap(int* (&a),int* (&b)) { // ���۷������� a �� ��Ʈ�� �����͸� ���� ����
	int* tmp = a; //a ���۷����� ����� �ּҰ��� tmp �� ������.
	a = b;
	b = tmp;
}

int main() {

	int a = 20, b = 30;
	double da = 2.222, db = 3.333; 
	int* pa = &a, * pb = &b; // �����Ͱ� ����Ű�� ����� �ڹٲ� ����.

	swap(a, b);
	swap(da, db);
	swap(pa, pb);


	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;

	std::cout << "da : " << da << std::endl;
	std::cout << "db : " << db << std::endl;

	std::cout << "*pa : " << *pa << std::endl;
	std::cout << "*pb : " << *pb << std::endl;


	// �̷��� �ڷ������� �ٸ� �Լ��� ����ؾ� �ϸ� ����� ���忡�� ������.
	// �Լ��̸��� �ٸ��� �Ѱ��� ��� swap ���� �Ȱ��� �����ص� ������.
	// �����Ϸ��� �Ű������� ���� �ڵ����� �ν��ؼ� ���� ������ ���� ã����.
	// ������ swap�Լ��� Ŀ�� �÷����� ���� �ν��ϴ� �Լ��� �ٸ��� �� �� ����.

	return 0;
}