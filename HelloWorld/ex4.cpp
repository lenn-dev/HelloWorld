// �Լ� �����ε����� ������ �̸��� ���� �Լ� �����
// 64���� ������ �ִ� �迭�� ����� 
// 64���� �������� ������ ������ŭ ī��Ʈ�ؼ� ����
// ������ �Ծ��� ���� ����

// ù��° �Լ��� ���ڰ� ������
// �ι�° �Լ��� ���ڰ� �����۰� ����(�������϶�)
// ����° �Լ��� ���ڰ� ������, ����, ����


#include <iostream>

using namespace std;

int inventory[64] = { 0 };
int score = 0;
void getItem(int itemId) {
	inventory[itemId]++;
}
void getItem(int itemId, int cnt) {
	inventory[itemId]=+cnt;
}
void getItem(int itemId, int cnt, int sc) {
	inventory[itemId] = +cnt;
	score = +sc;
}

int main() {

	getItem(2);
	getItem(5, 22);
	getItem(6, 2, 6000);
	getItem(2, 3);


	cout << score << endl;
	//���� 16�������� ����ؼ� Ȯ���غ�
	for (int i = 0; i < 16; i++) { 
		cout << inventory[i] << ' ';
	}
	cout << endl;




	return 0;
}