#include <stdio.h>

int main_m_array(void)
{
	int i; //메모리 공간 하나
	int array[5]; //1차원 배열
	int array2[2][5]; //2차원 배열
	//□□□□□
	//□□□□□
	// 배열 좌표 [행,렬]
	//[0, 0][0, 1][0, 2][0, 3][0, 4]
	//[1, 0][1, 1][1, 2][1, 3][1, 4]

	int array3[4][2]; //2차원 배열

	int array4[3][3][3]; //3차원 배열
	
	// □□□ 
	// □□□ 
	// □□□
	
	// □□□ 
	// □□□ 
	// □□□
	
	// □□□ 
	// □□□ 
	// □□□
	
	// [블럭,행,열]
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
	
	// 2차원 배열
	int arr[2][5] = 
	{  
		//2행 5열 배열
		{1,2,3,4,5},
		{1,2,3,4,5}
	};

	int arr2[4][2] = {  
		//4행 2열 배열
	  {1,2},
	  {1,2},
	  {1,2},
	  {1,2}
	};
	// 2차원 배열 접근 => 이중 for문
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("2차원배열 (%d,%d)의 값 : %d\n", i, j, arr2[i][j]); //각 좌표와 배열값까지 출력
		}
		printf("\n");
	}

	int arr3[3][3][3] = 
	{ 
		//3x3x3 배열
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
	//3차원 배열 접근 => 3중의 for문 
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				printf("3차원배열 (%d,%d,%d)의 값 : %d\n", i, j, k, arr3[i][j][k]); 
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}