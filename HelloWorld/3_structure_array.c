
/*구조체 배열을 사용한 프로그램*/ 
#include <stdio.h>
#pragma warning(disable:4996)

/*사용자 정의 자료형인 구조체형 선언*/
struct entry 
{
	//fname, lname, phone 을 구조체 멤버로 가짐
	char fname[20]; // 20개의 길이를 갖는 char형 배열 선언
	char lname[20]; // 20개의 길이를 갖는 char형 배열 선언
	char phone[10]; // 10개의 길이를 갖는 char형 배열 선언
};

// 4개의 개인신상정보를 저장하기 위한 구조체 배열 선언
struct entry list[4];
int i;

void main_struct()
{
	//입력값을 받아 구조체의 요소를 돌면서 배열을 초기화 해줌
	for (i = 0; i < 4; i++)
	{
		printf("Enter first name : ");// fname 입력값을 받기 위한 사용자 안내문 출력
		scanf("%s", list[i].fname); // 입력값을 i번째 list 의 fname 변수값에 저장
		printf("Enter last name : ");// lname 입력값을 받기 위한 사용자 안내문 출력
		scanf("%s", list[i].lname);// 입력값을 i번째 list 의 lname 변수값에 저장
		printf("Enter phone number : ");// phone 입력값을 받기 위한 사용자 안내문 출력
		scanf("%s", list[i].phone);// 입력값을 i번째 list 의 phone 변수값에 저장
		printf("\n"); // 줄바꿈
	}
	printf("\n");// 줄바꿈

	// 리스트에 입력된 값을 다른 형식으로 출력
	for (i = 0; i < 4; i++)
	{
		printf("Name : %s %s", list[i].fname, list[i].lname);
		printf("\t\tphone : %s \n", list[i].phone);
	}
}

