# include <stdio.h>

int main_array(void) {

	//배열 여러개의 변수를 동시에 생성
	/*int subway_array[3];
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	

	for (int i = 0; i < 3; i++) {
		printf("지하철 %d번째 칸에 %d명이 타고 있습니다.\n", i, subway_array[i]);
	}*/


	// 값 설정 방법
	// 값을 설정하지 않으면 더미값이 출력된다.
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}*/

	//배열 크기는 항상 상수로 선언
	/*int size = 10; //이렇게 설정 안됨
	int arr[10];*/


	// 값을 하나라도 선언하면 그 뒤의 값은 0으로 설정됨
	/*int arr[10] = { 1,2 };
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}*/

	//int arr[] = { 1,2 }; // arr[2]


	/*float arr_f[5] = { 1.2, 5, 3.4, 2 };
	for (int i = 0; i < 5; i++) {
		printf("%.2f\n", arr_f[i]);
	}*/

	//문자 vs 문자열
	/*char c = 'A';
	printf("%c\n", c);*/

	//문자열 끝에는 '끝'을 의미하는 NULL 문자 '\0'을 포함해야함
	// 한칸 비워두라는 말
	//char str[6] = "coding"; //[c][o][d][i][n][g]
	//char str[7] = "coding"; //[c][o][d][i][n][g]
	//printf("%s\n", str); // 인덱스 필요없이 s에 포함된 모든 캐릭터 출력됨
	

	//char str[] = "coding"; //[c][o][d][i][n][g]
	////printf("%s\n", str); //coding
	////printf("%d\n", sizeof(str));//7

	//for (int i = 0; i < sizeof(str); i++) {
	//	printf("%c\n", str[i]);
	//}

	
	//영어 한글자 1 byte
	//한글 1글자 2 byte
	//char 크기 : 1 byte
	//char kor[] = "나도코딩";
	//printf("%s\n", kor);
	//printf("%d\n", sizeof(kor)); //9 


	/*char c_arr[7] = { 'c','o','d','i','n','g'};
	char c_arr[6] = { 'c','o','d','i','n','g' };
	printf("%s", c_arr);*/

	//배열 사이즈를 더 크게 만들면 공백이 함께 출력됨
	/*char c_arr[10] = { 'c','o','d','i','n','g' };
	printf("%s\n", c_arr);
	for (int i = 0; i < sizeof(c_arr); i++) {
		printf("%c\n", c_arr[i]);
	}*/

	//문자열을 정수형으로 출력하면 ASCII 코드 값 출력이 되서
	//NULL 부분이 0으로 출력됨
	/*for (int i = 0; i < sizeof(c_arr); i++) {
		printf("%d\n", c_arr[i]); 
	}*/


	//문자열 입력받기 :경찰서 조서쓰기 예제
	/*char name[256];
	printf("이름이 뭐예요?");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);*/


	// 참고 : ASCII 코드? ANSI (미국표준협회)에서 제시한 표준 코드체계
	//7bit, 총 128개 코드 (0-127)
	// a : 97 (문자 a 의 아스키코드 정수값
	// A : 65
	// 0 : 48
	/*printf("%c\n", 'a');
	printf("%d\n", 'a');

	printf("%c\n", 'A');
	printf("%d\n", 'A');

	printf("%c\n", '\n');
	printf("%d\n", '\n');

	printf("%c\n", '0');
	printf("%d\n", '0');

	printf("%c\n", '1');
	printf("%d\n", '1');*/


	//참고2 : 0-127 사이의 아스키코드 정수값에 해당하는 문자 확인
	for (int i = 0; i < 128; i++) {
	printf("아스키코드 정수 %d : %c\n",i,i);
	}

	return 0;
}