#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int getRandomNum(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void) {

	//문이 5개 있고 각 문마다 점점 어려운 수식퀴즈가 출제
	//맞히면 통과, 틀리면 실패

	srand((unsigned int)time(NULL));
	int count = 0; //맞힌 문제갯수


	// int i = 0 부터 시작하게 되는 경우 아래에 있는 getRandomNumber() 함수가 실행될 때
	// 전달받은 level (메인함수의 i 값) 이 0 인 경우 rand() 를 0 으로 나눈 나머지를 구하게 되므로 에러가 발생
	// for (int i = 1; i <= 5; i++) 로 바꾸기 

	for (int i = 1; i <= 5; i++) {

		//random nums
		int num1 = getRandomNum(i);
		int num2 = getRandomNum(i);
		
		//print question("%d x %d ?", num1, num2);
		showQuestion(i,num1, num2);
		

		//answer
		int answer;
		scanf_s("%d", &answer);

		if (answer == -1) 
		{
			printf("프로그램을 종료합니다\n");
			//break; 프로그램 종료시 맞힌 문제 멘트가 나오는것 이상함
			exit(0); // 여기서 프로그램 종료하라는 뜻
		}
		else if (answer == num1 * num2) 
		{
			//성공
			success();
			count++;
		}
		else {
			//실패
			fail();
		}

	}
	printf("\n\n 당신은 5개의 비밀번호 중 %d 개를 맞혔습니다.\n", count);

	return 0;
}

int getRandomNum(int level)
{
	return rand() % (level * 7) + 1;
}


void showQuestion(int level, int num1, int num2)
{
	printf("\n\n######### %d 번째 비밀번호 #########\n", level);
	printf("\n\t%d x %d는? \n\n", num1, num2);
	printf("#############################\n");
	printf("\n 비밀번호를 입력하세요. (종료: -1)>> \n");
}

void success() {
	printf("\n >>정답입니다.\n");
}
void fail() {
	printf("\n >>틀렸습니다.\n");
}