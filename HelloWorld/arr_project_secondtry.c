#include <stdio.h>
#include <time.h>
#include <stdlib.h> //srand ���� ����


int main(void) {
	//�����̸� 
	printf("\n\n ===�ƺ��� ��Ӹ� ����===\n\n");

	//�߸��� 4�� �� �������� ����
	srand((unsigned int)time(NULL));

	//���� ����
	int answer; // ������Է°�
	int treatment = rand() % 4; // �߸����� �� ���ϱ� (0-3)
	printf("%d\n", treatment);

	//����� ��� ���� �߰� ����
	//���� �����ִ� �� ������ �ٸ��� �Ͽ� ����� ��� (ó���� 2��, ������ 3��...)
	int cntShowBottle = 0; //�̹� ���ӿ� ������ �� ����
	int prevcntShowBottle = 0; // ���� ���ӿ� ������ ���� ����

	//�� 3���� ���Ա�ȸ (3�� �߸��� ���� �õ�)
	for (int i = 1; i <= 3; i++) 
	{
		//4���� ���� �迭����
		int bottle[4] = { 0,0,0,0 };

		printf("\n\n\n>> %d ��° �õ� : \n\n\n ", i);
		//�� �����ֱ� do while ��
		// 1. �ڵ���� =>  while����Ȯ�� => ��(1.�ڵ����)/����(3.do while�� Ż��)
		do {
			//���� 2~3�� �������� �����ִ°� ���� 
			cntShowBottle = rand() % 2 + 2; // 0~1 +2 => 2,3
			printf("\n==���� ������ : %d��==\n ", cntShowBottle);
		} while (cntShowBottle == prevcntShowBottle);
		
		// �̹� ���Կ� ���� ������ prev ������ �־� ���� �Ǹ� �ٷ� Ż���Ͽ�
		// �ٽ� forloop �� ���� �ٽ� dowhile ����
		prevcntShowBottle = cntShowBottle;

		int isIncluded = 0; // ������ �� �߿� treatment�� ���ԵǾ����� ���� ( 1 �̸� ����)
		
		//printf(">> %d ��° �õ� : \n ", i);

		// ���� �������� ������ ����(2~3��)�� ���°�� ���� �������� ����
		// cntShowBottle ����ŭ forloop ���鼭 �� ����
		for (int j = 0; j < cntShowBottle; j++)
		{
			//bottle �迭�� �ε��� ������ŭ ���ؼ� ���� �� ���� �ε����� 1�� �ٲܿ���
			int randomSelect = rand() % 4; //0~3 
			printf("\n\n���õ� ���� ��ȣ�� : %d\n",randomSelect);
			

			//���õ� ���� ���� �ѹ��� ���õ��� ���� ä 0 �̸� 1�� �ٲ㼭 ����ó��
			// n�� ���� ���� ���� �� ���� ���� �̴� �ߺ��� ������
			if (bottle[randomSelect] == 0)
			{
				bottle[randomSelect] = 1;

				// ���õ� ���� �߸���(����)�� ��� ����ó��
				if (randomSelect == treatment)
				{
					isIncluded = 1; // �߸����� ��� 1�� ó��
				}

			}
			// �̹� ���õ� ���̸�, �ߺ��̹Ƿ� �ٽ� ����
			// forloop ���� j++ �� �� �����̴� �� ���� Ƚ������ ��������
			else 
			{
				j--;
			}

		}

		// ����ڿ��� ���� ǥ��
		// �� �迭 ���鼭 ���õ� (1 ó����) ���� ��� �ε����� 1�� ���� ���
		for (int k = 0; k < 4; k++)
		{
			if (bottle[k] == 1) {
				printf("%d��° ", k + 1);
			}
		}
		printf("������ �Ӹ��� �ٸ��ϴ�\n");

		if (isIncluded == 1)
		{
			printf("  >> ����! �Ӹ��� �����!!\n");
		}
		else
		{
			printf("  >> ����! �Ӹ��� ���� �ʾҾ��..�̤�\n");
		}

		//�׳� �ѹ��� ����Ǹ� ��̾����ϱ� ����ڿ��� �Է�Ű �޾� �����ϱ�
		printf("\n ...��� �Ϸ��� ����Ű�� �������� ...");
		getchar();
	}
	

	//���� �Է¹ޱ�
	printf("\n\n �߸����� �� �� �ϱ��?");
	// �Է°� answer ������ �ֱ�
	scanf_s("%d", &answer);


	//answer ���� treatment �� ���� �����
	if (answer == treatment + 1)
	{
		printf("�����Դϴ�.!!\n");
	}
	else
	{
		printf(" ��! Ʋ�Ⱦ��. ������ %d �Դϴ�\n", treatment + 1);
	}


	return 0;
}