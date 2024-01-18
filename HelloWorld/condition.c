// 표준 입출력 헤더
#include <stdio.h>
//stdio.h 파일을 포함한다 
//stdio.h 은 standard input out header 의 약자
// 이 파일엔 화면에 메세지를 띄울 수 있게 도와주는 여러가지 함수가 포함되어있음.


#include <time.h> //srand 함수 사용하기 위해 필요

//main 함수는 프로그램이 시작되는 함수
int main_codition(void) {

	// 버스를 탄다고 가정 : 학생/일반인으로 구분 (일반인:20세)
	/*int age=25;
	if (age >= 20) {
		printf("일반 입니다\n");
	}
	else {
		printf("학생 입니다\n");
	}*/

	//초등학생(8-13)/중학생(14-16)/고등학생(17-19)로 나누면?
	//조건문
	/*int age;
	printf("몇살이에요?");
	scanf_s("%d",&age);
	
	if (age >=8 && age <= 13) {
		printf("초등학생이군요");
	}
	else if (age > 13 && age < 17) {
		printf("중학생이군요");
	}
	else if (age >= 17 && age < 20) {
		printf("고등학생이군요");
	}
	else  {
		printf("중고등학생이 아니군요");
	}*/


	//break continue
	// 1번부터 30번까지 이슨ㄴ 반에서 1번부터 5번까지 발표를 합니다.
	/*for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("집에 돌아가세요\n");
			break;
		}
		else {
			printf("%d 번째 학생 발표준비 하세요.\n", i);
		}
	}*/
	

	//1번부터 30번까지 있는 반에서 결석생 7번을 제외하고 6번부터 10번까지 발표하세요.
	/*for (int i = 1; i <= 30; i++) {
		if (i >=6 && i<=10) {
			
			if (i == 7) {
				printf("%d 학생은 결석입니다.\n", i);
				continue;
			}

			printf("%d 번째 학생 발표준비 하세요.\n", i);
		}
		
	}*/

	// && ||
	/*int a = 10; 
	int b = 10; 
	int c = 12; 
	int d = 13;
	if (a == b && c == d) {
		printf("a와 b는 같고, c와 d도 같습니다.\n");
	}
	else if(a ==b || c==d){
		printf("a와b는 같거나 혹은 c와 d의 값이 같습니다.\n");
	}*/

	
	//가위 0 바위 1 보 2
	//srand(time(NULL)); //난수 생성
	//int i = rand() % 3; //0-2 반환
	//if (i == 0) {
	//	printf("가위\n");
	//}
	//else if (i == 1) {
	//	printf("바위\n");
	//}
	//else if (i == 2) {
	//	printf("보\n");
	//}
	//else {
	//	printf("몰라요\n");
	//}


	//switch case
	//srand(time(NULL)); //난수 생성
	//int i = rand() % 3; //0-2 반환
	//switch (i) 
	//{
	//case 0: printf("가위\n"); break;
	//case 1: printf("바위\n"); break;
	//case 2: printf("보\n"); break;
	//default: printf("몰라요\n"); break;

	//}
	

	// 맨위의 버스카드 예제를 switch 문으로
	// C 언어의 switch문은 조건에 부합하는 것 이후에도 다 실행되기 때문에 
	// 각 case 뒤에다 break; 문을 써 줘야한다
	// 이런 문법의 특징을 이용하여 
	// 같은 문장을 반복해야하는 범위의 맨 마지막 case 문에만 
	// 실행문을 쓰고 break만 걸어주면 된다.
	/*int age;
	printf("몇살이에요?");
	scanf_s("%d",&age);

	switch (age) {
		
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13: printf("초등학생입니다"); break;
	case 14:
	case 15:
	case 16: printf("중학생입니다"); break;
	case 17:
	case 18:
	case 19:  printf("고등학생입니다"); break;
	default: printf("일반입니다\n"); break;
		
	}

	*/

	//Up and Down 숫자 맞추기 게임
	srand(time(NULL));
	int num = rand() % 100 + 1; //1~100 사이의 숫자
	printf("숫자 : %d\n", num);
	int answer = 0; //정답
	int chance = 5; //기회
	while (chance > 0) 
	{
		printf("남은 기회는 %d 번\n", chance--);
		printf("숫자를 맞춰보세요 (1~100) : ");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("DOWN \n\n");
		}
		else if (answer < num) {
			printf("UP \n\n");
		}
		else if(answer == num){
			printf("정답입니다! \n\n");
			break;
		}
		else {
			printf("알수 없는 오류가 발생했습니다 \n\n");
		}

	}	
	return 0;
}