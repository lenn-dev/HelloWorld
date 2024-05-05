
/*구조체 배열을 사용한 프로그램*/ 
#include <stdio.h> // 파일포함 선행처리기, 입출력 함수 처리하기 위한 헤더파일
#pragma warning(disable:4996) // 파일 내 경고 해제

/*구조체 entry 정의*/
struct entry 
{
	//fname, lname, phone 을 구조체 멤버로 가짐
	char fname[20]; // 20개의 길이를 갖는 문자형 배열, fname을 entry 멤버로 정의
	char lname[20]; // 20개의 길이를 갖는 문자형 배열, lname을 entry 멤버로 정의
	char phone[10]; // 10개의 길이를 갖는 문자형 배열, phone을 entry 멤버로 정의
};

struct entry list[4];// 4개의 개인신상정보를 저장하기 위한 entry 구조체 배열 list 선언
int i; // 정수형 i 변수 선언

void main_struct() // main().함수의 시작
{
	
	for (i = 0; i < 4; i++) // 구조체 배열 list 길이 만큼 for루프 돌기
	{
		printf("Enter first name : ");// fname 입력값을 받기 위한 사용자 안내문 출력
		scanf("%s", list[i].fname); // 입력값을 i번째 list 의 fname 변수값에 저장
		printf("Enter last name : ");// lname 입력값을 받기 위한 사용자 안내문 출력
		scanf("%s", list[i].lname);// 입력값을 i번째 list 의 lname 변수값에 저장
		printf("Enter phone number : ");// phone 입력값을 받기 위한 사용자 안내문 출력
		scanf("%s", list[i].phone);// 입력값을 i번째 list 의 phone 변수값에 저장
		printf("\n"); //  해당인덱스의 요소들을 출력 후 줄바꿈으로 구분
	}
	printf("\n");// 줄바꿈

	// 리스트에 입력된 값을 다른 형식으로 출력
	for (i = 0; i < 4; i++)
	{
		printf("Name : %s %s", list[i].fname, list[i].lname); // list 구조체배열의 i번째 행에 fname과 lname을 도트연산자를 이용해 참조
		printf("\t\tphone : %s \n", list[i].phone); // Name출력 후 줄바꿈 없이 두번의 탭이동 후 list[i]의 phone 을 출력한 뒤 줄바꿈.
	}
}

