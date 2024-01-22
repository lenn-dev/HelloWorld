#include <stdio.h>
#include <time.h>
#include <stdlib.h> //srand ���� ����

int main(void) {
	//srand(time(NULL)); //�������� unsigned int ����
	srand((unsigned int)time(NULL));
	printf("\n\n===�ƺ��� ��Ӹ� ����===\n\n");
	int answer; // ����� �Է°�
	int treatment = rand() % 4; // �߸��� ����(0~3)

	// �����ִ� �� ������ �������� �ٸ��� �Ͽ� ����� ���
	int cntShowBottle = 0; // �̹� ���ӿ� ������ �� ����
	int prevShowBottle = 0; // �� ���ӿ� ������ �� ����

	//3���� ��ȸ(3���� �߸��� ���� �õ�)
	for (int i = 1; i <= 3; i++) {
		int bottle[4] = { 0,0,0,0 }; //4���� ��
		do {
			cntShowBottle = rand() % 2 + 2; //��� ���� �������� :������ �� ���� (0-1,+2 -> 2,3)
		} while (cntShowBottle == prevShowBottle);
		prevShowBottle = cntShowBottle;

		int isIncluded = 0; // ������ �� �߿� �߸����� ���ԵǾ����� ����
		printf(">> %d ��° �õ� : ", i);

		// ������ ���õ� ���� ������ŭ 
		// ���� ���° ���� �������� : ������ �� ������ ���� 
		for (int j = 0; j < cntShowBottle; j++)
		{
			int randBottle = rand() % 4; //0-3

			//���õ� ���� 1�� �ٲ��ִ� �۾�
			if (bottle[randBottle] == 0)
			{
				bottle[randBottle] = 1;
				if (randBottle == treatment)
				{
					isIncluded = 1; // �߸��� ���Ե��� ��� 1�� �ٲ���.
				}
			}
			//�̹� ���õ� ���̸�, �ߺ��̹Ƿ� �ٽ� ����
			// j���� �ٿ������μ� ��ȸ�� ���� �ʰ� ����
			else {
				j--;
			}


			//����ڿ��� ���� ǥ��
			for (int k = 0; i < 4; k++)
			{
				if (bottle[k] == 1) //���õǾ��� ���
					printf("%d", k + 1); // �ε���+1 �ؼ� ���° �����̶�� ����Ʈ
			}
			printf("������ �Ӹ��� �ٸ��ϴ� \n\n");

			if (isIncluded == 1)
			{
				printf(" >>���� : �Ӹ��� ����� ! \n");
			}
			else
			{
				printf(" >>���� : �Ӹ��� ���� �ʾҾ�� ! \n");
			}
			printf(" \n ��� �Ϸ��� �ƹ�Ű�� ��������...\n");
			getchar(); //�������� system("pause")�� ��ü
			//system("pause");
		}

		printf("\n\n �߸����� �� �� �ϱ��?");
		scanf_s("%d", &answer);

		if (answer == treatment + 1)
		{
			printf("  \n�����Դϴ� ! \n");
		}
		else
		{
			printf("  \n��! Ʋ�Ⱦ��. ������ %d �Դϴ�! \n", treatment + 1);
		}



		return 0;
	}
}