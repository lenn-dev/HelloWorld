#include <stdio.h>
#include <time.h>
#include <stdlib.h> //srand 위해 포함


int main(void) {
	//게임이름 
	printf("\n\n ===아빠는 대머리 게임===\n\n");

	//발모제 4개 중 랜덤으로 고르기
	srand((unsigned int)time(NULL));

	//변수 선언
	int answer; // 사용자입력값
	int treatment = rand() % 4; // 발모제인 병 정하기 (0-3)
	printf("%d\n", treatment);

	//정답률 향상 위한 추가 변수
	//서로 보여주는 병 갯수를 다르게 하여 정답률 향상 (처음에 2개, 다음엔 3개...)
	int cntShowBottle = 0; //이번 게임에 보여줄 병 갯수
	int prevcntShowBottle = 0; // 이전 게임에 보여준 병의 갯수

	//총 3번의 게입기회 (3번 발모제 투여 시도)
	for (int i = 1; i <= 3; i++) 
	{
		//4개의 병의 배열생성
		int bottle[4] = { 0,0,0,0 };

		printf("\n\n\n>> %d 번째 시도 : \n\n\n ", i);
		//병 보여주기 do while 문
		// 1. 코드실행 =>  while조건확인 => 참(1.코드실행)/거짓(3.do while문 탈출)
		do {
			//병은 2~3개 조합으로 보여주는게 적당 
			cntShowBottle = rand() % 2 + 2; // 0~1 +2 => 2,3
			printf("\n==병의 갯수는 : %d개==\n ", cntShowBottle);
		} while (cntShowBottle == prevcntShowBottle);
		
		// 이번 게입에 나온 갯수를 prev 변수에 넣어 같게 되면 바로 탈출하여
		// 다시 forloop 을 돌며 다시 dowhile 실행
		prevcntShowBottle = cntShowBottle;

		int isIncluded = 0; // 보여준 병 중에 treatment가 포함되었는지 여부 ( 1 이면 포함)
		
		//printf(">> %d 번째 시도 : \n ", i);

		// 위에 랜덤으로 정해진 갯수(2~3개)로 몇번째의 병을 보여줄지 선택
		// cntShowBottle 수만큼 forloop 돌면서 병 선택
		for (int j = 0; j < cntShowBottle; j++)
		{
			//bottle 배열의 인덱스 범위만큼 정해서 뽑은 뒤 뽑힌 인덱스는 1로 바꿀예정
			int randomSelect = rand() % 4; //0~3 
			printf("\n\n선택된 병의 번호는 : %d\n",randomSelect);
			

			//선택된 병이 아직 한번도 선택되지 않은 채 0 이면 1로 바꿔서 선택처리
			// n개 수의 병을 뽑을 때 같은 병을 뽑는 중복을 없애줌
			if (bottle[randomSelect] == 0)
			{
				bottle[randomSelect] = 1;

				// 선택된 병이 발모제(정답)일 경우 정답처리
				if (randomSelect == treatment)
				{
					isIncluded = 1; // 발모제일 경우 1로 처리
				}

			}
			// 이미 선택된 병이면, 중복이므로 다시 선택
			// forloop 에서 j++ 이 된 상태이니 병 선택 횟수에서 제외해줌
			else 
			{
				j--;
			}

		}

		// 사용자에게 문제 표시
		// 병 배열 돌면서 선택된 (1 처리된) 병일 경우 인덱스에 1을 더해 출력
		for (int k = 0; k < 4; k++)
		{
			if (bottle[k] == 1) {
				printf("%d번째 ", k + 1);
			}
		}
		printf("물약을 머리에 바릅니다\n");

		if (isIncluded == 1)
		{
			printf("  >> 성공! 머리가 났어요!!\n");
		}
		else
		{
			printf("  >> 실패! 머리가 나지 않았어요..ㅜㅜ\n");
		}

		//그냥 한번에 실행되면 재미없으니까 사용자에게 입력키 받아 실행하기
		printf("\n ...계속 하려면 엔터키를 누르세요 ...");
		getchar();
	}
	

	//정답 입력받기
	printf("\n\n 발모제는 몇 번 일까요?");
	// 입력값 answer 변수에 넣기
	scanf_s("%d", &answer);


	//answer 값과 treatment 값 비교해 정답비교
	if (answer == treatment + 1)
	{
		printf("정답입니다.!!\n");
	}
	else
	{
		printf(" 땡! 틀렸어요. 정답은 %d 입니다\n", treatment + 1);
	}


	return 0;
}