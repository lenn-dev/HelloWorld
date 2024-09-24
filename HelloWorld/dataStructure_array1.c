//자료구조 2강 array 
// 1차원 배열에서의 주소계산
// A[0]의 시작주소를 a라 가정하면 A[1]저장주소는? [a+k]
// A[2] 주소는 [a+2*k], A[3] 주소는 [a+3*k]
// 
// scnaf 를 scanf_s로 바꿔줘야 동작함
// debug asserttion faild =입력받은 값을 저장할 변수에 & 붙여야 함
//#progma warning(disable:4996)

#include <stdio.h>
#define array_size 5 // 배열의 사이즈를 미리 정함

int a[array_size]; // 배열을 전역변수로 정의

void arrayCreate() {
	int i;
	//생성된 배열을 for loop돌면서 값을 할당해줌
	for (i = 0; i < array_size; i++) {
		//a[i] = 0; // 0으로 초기화
		printf("배열의 초기값을 입력하세요. a[%d] : ", i);
		scanf_s("%d", &a[i]);
	}

	printf("배열의 초기값이 설정되었습니다. \n\n");
}

void retrieve() { // 사용자가 입력한 위치값(배열 인덱스)에 저장된 값을 알려주는 함수
	int s;

	printf("값을 알고자 하는 배열 위치값을 입력하세요(0~4) : ");
	scanf_s("%d", &s);

	// 배열의 크기 안에서 검색하고 값을 출력
	if (s >= 0 && s < array_size) {
		printf("a[%d]번째 위치에 있는 값은 %d입니다. \n\n", s, a[s]);
	}
	else {
		printf("Error \n");
		
	}
}

void arraySearch() { // 배열에 저장된 값 중에 사용자가 찾고자 하는 값이 있는지 검색해주는 함수
	int i;
	int result = 0;
	int value = 0;
	printf("입력한 값 중에서 검색하고자 하는 값을 입력하세요 : ");

	scanf_s("%d", &value);

	for (i = 0; i < array_size; i++) {
		if (a[i] == value) {
			printf("배열 a[%d]번째 %d값이 검색되었습니다. \n", i, value);
			result = 1;
		}
	}
	if (result == 0) printf("찾고자 하는 값이 없습니다. \n");
}

void main_ds_array1() {
	// 배열 사이즈를 미리 설정함
	printf("이 프로그램에서 배열의 크기는 %d입니다 \n", array_size);

	arrayCreate();
	retrieve();
	arraySearch();

	printf("The End \n");
}