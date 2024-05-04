#include <stdio.h>
#pragma warning(disable:4996)
int main_avg()
{
	int n, count; // int 형 n과 count 변수 선언
	float avg, d, sum = 0; // float 형 avg, d, sum 변수 선언, 초기화
	float list[100];
	printf("평균을 내고자 하는 데이터의 개수는? "); //사용자 안내문 출력
	scanf_s("%d", &n);// 정수 입력받아 변수 n 에 저장
	// 입력받은 데이터의 개수만큼 루프돌기
	for (count = 0; count < n; ++count)
	{
		printf("i=%d x=", count + 1); // 몇번째 입력값인지 알려주고, 입력값 받기  
		scanf_s("%f", &list[count]); // 배열list 에 입력값 저장
		sum += list[count]; //입력값을 sum 에 합산해주기
	}
	avg = sum / n; // 평균값 계산
	printf("The average is %5.2f \n", avg); // 

	for (count = 0; count < n; ++count)
	{
		d = list[count] - avg; //표준편차 계산
		printf("i = %d  x = %5.2f  d = %5.2f \n", count + 1, list[count], d);
	}
	return 0;
}