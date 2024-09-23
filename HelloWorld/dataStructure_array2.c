//#pragma warning(disable:4996)

#include <stdio.h>
#define col 3 // 배열의 행 사이즈
#define row 4 //배열의 열 사이즈

int a[col][row]; // 배열을 전역변수로 정의

void arrayCreate2() {
	int i,j;
	printf("배열의 초기값을 입력하세요. \n");

	for (int i = 0; i < col; i++) {
		printf("\n");
		for (int j = 0; j < row; j++) {
			printf("a[%d][%d] : ", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
	printf("배열의 초기값이 설정되었습니다. \n\n");
}

void arrayPrint() { //입력된 배열 값 출력하는 함수
	int i,j;
	printf("2차원 배열의 입력된 값은 다음과 같습니다. \n\n");

	for (int i = 0; i < col; i++) {
		printf("[");
		for (int j = 0; j < row; j++) {
			// 5개 칸 만들고 오른쪽 정렬하여 출력, tap키 만큼 공백발생
			printf("%5d", a[i][j]);
		}
		printf("]\n");
	}
}

void main() {
	printf("이 프로그램에서 2차원 배열의 크기는 [%d][%d] 입니다. \n", col, row);

	arrayCreate2();
	arrayPrint();

	printf("The End \n");
}