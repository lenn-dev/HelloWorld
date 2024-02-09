#include <stdio.h>
#include <time.h>
// 물고기 6마리가 있어요.
// 이들은 사막에 있는 6개의 어항에 각각 살고 있어요.
// 사막은 너무 덥고 건조해서 어항의 물이 빨리 증발해요.
// 물이 다 증발하기 전에 물을 채워서 물고기를 살려야 합니다.
// 물고기는 시간이 지날수록 점점 커집니다.  
// 다 크면 잡아먹어요.

void initData();
void printFishes();
void decreaseWater(long elapsedTime);
int checkFishAlive();

int level; // 물의 레벨 전역변수
int arrayFish[6]; // 6마리 물고기 배열
int * cursor; // 어떤 물고기에게 물을 줄지 포인터

int main(void) 
{
	// 어항물과 레벨업을 위해 시간 정보를 활용함, 필요한 변수 선언
	long startTime = 0; //게임 시작 시간
	long totalElapsedTime = 0; // 총 경과 시간
	long prevElapsedTime = 0; // 직전 경과 시간 (최근 물을 준 시간 간격)

	int num; // 어항에 몇 번 물을 줄 것인지, 사용자 입력
	initData(); // 데이터 초기화 

	cursor = arrayFish; // 포인터 변수 사용함으로써 배열처럼 사용가능 array[0], array[1]..

	startTime = clock(); // 현재 시간을 밀리세컨(1/1000 초) 단위로 반환
	
	// while 문 무한으로 돌면서 진행 (물고기가 다 죽거나 레벨업을 끝까지 할 경우까지)
	while (1)
	{
		printFishes(); // 현재 물고기 어항의 물 상태 우선 
		//getchar();// 임시로 사용자 입력 대기 해서 엔터칠 때마다 루프 돌게(무한루프방지)
		printf("몇 번 어항에 물을 넣으시겠어요?");
		scanf_s("%d", &num);

		// 입력값 체크 (1과 2가 12로 입력되는 것 방지)
		if (num < 1 || num > 6) 
		{
			printf("\n입력값이 잘못되었습니다\n");
			continue; //while 문 처음으로 돌아감
		}

		// 총 경과시간 = 현재 시각 - 시작 시각 
		// 단위가 밀리세컨이라 초로 확인하기 위해 CLOCKS_PER_SEC로 나눠줌 
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC; //1000단위로 나눠줌
		printf("총 경과 시간 : %ld 초\n", totalElapsedTime); // 시간은 long 이니까 %ld
		 
		// 직전 물 준 시간 (마지막으로 물 준 시간) 이 후 경과시간
		// 물을 준 이후로 얼마간의 시간이 지났는지 체크해서 물 높이를 낮추기 
		// 부가설명
		// 0 ===A===> startTime 5초 === B ===> 물 줌 15초(prevElapased) ==== C ===> 현재시각(clock()) 40초 라 가정하면
		// C 구간 (현재시간(Clock())과 이전물 준 시간(prevElapsed) 사이 경과시간)을 알려면 
		// 현재시각 40초- 시작시간(startTime)5초 - (이전물prevElapse-시작시간startTime) 하면 됌
		// 즉 현재시간(40초) - A 구간(5초) - B 구간(10초) 하면 C구간 (totalElapsedTime)이 나옴


		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근 경과시간 %ld 초\n", prevElapsedTime);

		// 어항 물 증발하며 감소
		decreaseWater(prevElapsedTime);

		// 사용자가 입력한 어항에 물을 준다.
		// 1. 어항의 물이 0 이면? => 물고기 이미 죽었으므로 물을 주지 않는다.
		// cursor = arrayFish; 로 정의 해서 배열처럼 사용가능함
		// 사용자 입력값 num은 실제 배열에서 찾으려면 1을 빼야 인덱스값이 일치됨
		if (cursor[num - 1] < 0)  
		{
			printf("%d번 물고기는 이미 죽었습니다..물을 주지 않습니다", num);
		}
		// 2. 어항의 물이 0 이 아닌 경우? => 물을 준다. 단, 100을 넘지 않는지 체크
		// 지정한 어항에 1만큼의 물을 줄때 100 보다 큰지 체크
		else if (cursor[num - 1] + 1 <= 100)
		{
			//물을 준다
			printf("%d 번 어항에 물을 줍니다\n\n", num);
			cursor[num - 1] += 1; // cursor[num-1] = cursor[num-1] +1
		}

		// 레벨업 할 건지 확인 (레벨업은 20초마다 한번씩 수행)
		// 20 초 동안 물고기를 죽이지 않고 있으면 레벨업
		// 예를들어 15초 경과시 : 15/20 은 0.75 
		// 1보다 작은 값은 정수형 변수에서 0 으로 됨
		// 그래서 0 > 0 이 성립되지 않아서 레벨업 안됨
		if (totalElapsedTime / 20 > level - 1)
		{
			//레벨업
			level++; //level 1이었을때 level 2
			printf("***축 레벨업! %d 레벨에서 %d 레벨로 업그레이드***\n\n", level - 1, level);

			//최종레벨 : 5
			if (level == 5)
			{
				printf("\n\n 축하합니다. 최고 레벨을 달성했습니다! 게임종료합니다.");
				exit(0); // 모든 프로그램 끝냄
			}
		}

		// 모든 물고기가 죽었는지 확인해서 게임종료
		if (checkFishAlive() == 0) // 여기서 0인지 정수와 비교하기 때문에 함수선언은 void 가 아닌 int형이어야 함
		{
			//물고기 모두 죽음
			printf("모든 물고기가 죽었어요 ㅜㅜ\n");
			exit(0);
		}
		else
		{
			//최소 한마리 이상의 물고기는 살아 있음
			printf("물고기가 아직 살아있어요 \n");
		}

		prevElapsedTime = totalElapsedTime;
		//10초 때 물 줌 => 15초 때 물 줌 (5초라는 갭을 prevElapsedTime 에 넣음 =>15 초로 다시저장) => 25초 때 물 줌 (10초 갭..)
		// (10초의 갭을 계산하기 위해서는 25에서 15를 빼야하는데 15가 저장이 안되어 있음
		// 왜냐면 prevElapsedTime 에 경과시간인 5초를 넣었기 때문에;; 
		// 그래서 while 문 끝내기 전에 prevElapsedTime에 다시 15를 넣어주는 작업을 해야함
		// 저장된 값 5초는 decreseWater 할때 이미 썼으므로...
		// 구지 이렇게 헷갈리게 할 필요가 있는가...
	}




	return 0;

}

void initData()
{
	level = 1; // 게임 레벨 (1-5)
	// 6마리 물고기
	for (int i = 0; i < 6; i++) {
		arrayFish[i] = 100; // 어항 물의 높이 (0-100)
	}

}
void printFishes() {
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayFish[i]);
	}
	printf("\n\n");
}
void decreaseWater(long elapsedTime)
{
	// 각 6개의 어항의 물을 모두 증발시키기
	for (int i = 0; i < 6; i++) 
	{
		// 현재 레벨에 경과한 시간만큼 곱해준 만큼의 물을 빼주기 
		// 증발 속도가 늦어서 *3 을 곱해줌 (게임 난이도 조절을 위한 값)
		arrayFish[i] -= (level * 3 * (int)elapsedTime);

		//물 레벨이 0 밑으로는 내려가지 않으니 0이하는 모두 0 처리
		if (arrayFish[i] < 0) 
		{
			arrayFish[i] = 0;
		}

	}
}

int checkFishAlive() 
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
		{
			return 1;  // true 반환
		}
		return 0; // 0보다 작을경우 if 문 만나지 못하고 0 반환
	}
}