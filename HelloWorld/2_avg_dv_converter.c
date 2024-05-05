
/* n개의 실수를 입력받아 평균, 표준편차 구하는 프로그램 */
#include <stdio.h>
#pragma warning(disable:4996)
void main_avg()
{
	int n, count; // int형 n과 count 변수 선언
	float avg, d, sum = 0; // float형 avg,d,sum 변수 선언과 동시에 0으로 초기화
	float list[100]; // 100의 길이를 갖는 float형 배열 변수 list 선언
	printf("평균을 내고자 하는 데이터의 개수는? "); //사용자 안내문 출력
	scanf_s("%d", &n);// 정수 입력받아 변수 n에 저장
	
	// 입력받은 데이터의 개수만큼 루프돌며 입력값 더해주기
	for (count = 0; count < n; ++count)
	{
		printf("i = %d  x = ", count + 1); // 몇번째 입력값인지 알려주고, 사용자에게 입력값 넣으라는 안내문 출력  
		scanf_s("%f", &list[count]); // 배열 list 의 해당 인덱스에 입력값 저장
		sum += list[count]; //입력값을 sum 변수에 합산해주기
	}
	avg = sum / n; // 합산한 값 sum 으로 평균값 계산
	printf("The average is %5.2f \n", avg); // 평균값 avg를 총 5자리의 소수점 이하 2자리 출력

	// list 루프돌며 표준편차 계산
	for (count = 0; count < n; ++count)
	{
		d = list[count] - avg; // 각각의 입력값에 대한 표준편차를 계산하여 d 변수에 저장
		printf("i = %d  x = %5.2f  d = %5.2f \n", count + 1, list[count], d); // 입력순서, 입력값, 표준편차값 출력
	}
	
}

