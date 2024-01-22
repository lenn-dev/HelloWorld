#include <stdio.h>
#include <time.h>
#include <stdlib.h> //srand 위해 포함

int main(void) {
	//srand(time(NULL)); //에러나서 unsigned int 포함
	srand((unsigned int)time(NULL));
	printf("\n\n===아빠는 대머리 게임===\n\n");
	int answer; // 사용자 입력값
	int treatment = rand() % 4; // 발모제 선택(0~3)

	// 보여주는 병 갯수의 랜덤값을 다른게 하여 정답률 향상
	int cntShowBottle = 0; // 이번 게임에 보여줄 병 갯수
	int prevShowBottle = 0; // 앞 게임에 보여준 병 갯수

	//3번의 기회(3번의 발모제 투여 시도)
	for (int i = 1; i <= 3; i++) {
		int bottle[4] = { 0,0,0,0 }; //4개의 병
		do {
			cntShowBottle = rand() % 2 + 2; //몇개의 병을 보여줄지 :보여줄 병 갯수 (0-1,+2 -> 2,3)
		} while (cntShowBottle == prevShowBottle);
		prevShowBottle = cntShowBottle;

		int isIncluded = 0; // 보여줄 병 중에 발모제가 포함되었는지 여부
		printf(">> %d 번째 시도 : ", i);

		// 위에서 선택된 병의 갯수만큼 
		// 이제 몇번째 병을 보여줄지 : 보여줄 병 종류를 선택 
		for (int j = 0; j < cntShowBottle; j++)
		{
			int randBottle = rand() % 4; //0-3

			//선택된 병은 1로 바꿔주는 작업
			if (bottle[randBottle] == 0)
			{
				bottle[randBottle] = 1;
				if (randBottle == treatment)
				{
					isIncluded = 1; // 발모제 포함됐을 경우 1로 바꿔줌.
				}
			}
			//이미 선택된 병이면, 중복이므로 다시 선택
			// j값을 줄여줌으로서 기회를 잃지 않게 해줌
			else {
				j--;
			}


			//사용자에게 문제 표시
			for (int k = 0; i < 4; k++)
			{
				if (bottle[k] == 1) //선택되었을 경우
					printf("%d", k + 1); // 인덱스+1 해서 몇번째 물약이라고 프린트
			}
			printf("물약을 머리에 바릅니다 \n\n");

			if (isIncluded == 1)
			{
				printf(" >>성공 : 머리가 났어요 ! \n");
			}
			else
			{
				printf(" >>실패 : 머리가 나지 않았어요 ! \n");
			}
			printf(" \n 계속 하려면 아무키나 누르세요...\n");
			getchar(); //오류나서 system("pause")로 대체
			//system("pause");
		}

		printf("\n\n 발모제는 몇 번 일까요?");
		scanf_s("%d", &answer);

		if (answer == treatment + 1)
		{
			printf("  \n정답입니다 ! \n");
		}
		else
		{
			printf("  \n땡! 틀렸어요. 정답은 %d 입니다! \n", treatment + 1);
		}



		return 0;
	}
}