#include <stdio.h>

int main_m_array(void)
{
	int i; //�޸� ���� �ϳ�
	int array[5]; //1���� �迭
	int array2[2][5]; //2���� �迭
	//������
	//������
	// �迭 ��ǥ [��,��]
	//[0, 0][0, 1][0, 2][0, 3][0, 4]
	//[1, 0][1, 1][1, 2][1, 3][1, 4]

	int array3[4][2]; //2���� �迭

	int array4[3][3][3]; //3���� �迭
	
	// ���� 
	// ���� 
	// ����
	
	// ���� 
	// ���� 
	// ����
	
	// ���� 
	// ���� 
	// ����
	
	// [����,��,��]
	// [0, 0, 0][0, 0, 1][0, 0, 2]
	// [0, 1, 0][0, 1, 1][0, 1, 2]
	// [0, 2, 0][0, 2, 1][0, 2, 2]
	// 
	// [1, 0, 0][1, 0, 1][1, 0, 2]
	// [1, 1, 0][1, 1, 1][1, 1, 2]
	// [1, 2, 0][1, 2, 1][1, 2, 2]
	// 
	// [2, 0, 0][2, 0, 1][2, 0, 2]
	// [2, 1, 0][2, 1, 1][2, 1, 2]
	// [2, 2, 0][2, 2, 1][2, 2, 2]
	
	// 2���� �迭
	int arr[2][5] = 
	{  
		//2�� 5�� �迭
		{1,2,3,4,5},
		{1,2,3,4,5}
	};

	int arr2[4][2] = {  
		//4�� 2�� �迭
	  {1,2},
	  {1,2},
	  {1,2},
	  {1,2}
	};
	// 2���� �迭 ���� => ���� for��
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("2�����迭 (%d,%d)�� �� : %d\n", i, j, arr2[i][j]); //�� ��ǥ�� �迭������ ���
		}
		printf("\n");
	}

	int arr3[3][3][3] = 
	{ 
		//3x3x3 �迭
	   {
		 {1,2,3},
		 {1,2,3},
		 {1,2,3}
	   },
	   {
		 {1,2,3},
		 {1,2,3},
		 {1,2,3}
	   },
	   {
		 {1,2,3},
		 {1,2,3},
		 {1,2,3}
	   }
	};
	//3���� �迭 ���� => 3���� for�� 
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				printf("3�����迭 (%d,%d,%d)�� �� : %d\n", i, j, k, arr3[i][j][k]); 
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}