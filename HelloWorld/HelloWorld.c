#include <stdio.h>

 //디버깅 없이 실행 ctrl+fn+f5
// comment/uncomment ctrl+k,c / ctrl+k,u
int main(void)
{
	//정수형 변수 
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	//실수형 변수
	//%f 실수형
	//%.2f 소숫점 둘째자리까지 
	/*float f = 46.5; 
	printf("%.2f\n", f);*/  

	//double
	/*double d = 4.456;
	printf("%.2lf\n", d);*/

	//상수 (변하지 않는 수): 대문자로 처리
	// 앞에 const 붙여줌
	/*const int YEAR = 2000;
	prinf("태어난 년도 : %d\n", YEAR);*/

	//printf
	//연산
	//int add = 3 + 7; //10
	//	printf("3 + 7 =%d\n", add);
	//	printf("%d + %d =%d\n", 3, 7, 3 + 7);
	//	printf("%d x %d =%d\n", 3, 7, 3 * 7);

	//scanf
	//키보드 입력을 받아서 저장
	//입력받을 변수명 앞에 & 붙이기
	/*int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);*/

	/*int one, two, three; 
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);*/

	//문자(한 글자)
	/*char c = 'A';
	printf("%c\n", c);*/

	//문자열(한 글자 이상)
	//문자열 받을때는 & 안붙이고, 사이즈 설정해줘야 함 sizeof
	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);



	
	return 0;
}

