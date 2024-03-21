//comment 처리 CTRL + K + C  
//Uncomment 처리 CTRL + K + U 


// 1장 c 언어의 개요=========================================

// 두 수의 곱 계산 프로그램

////두수의 곱 계산하는 프로그램
////선행처리기
//#include <stdio.h>
////원형선언
//int product(int x, int y);
////메인함수(필수)
//void main() 
//{
//	int a, b, c;
//	printf("enter a number between 1 and 100: ");
//	scanf_s("%d", &a);
//	printf("enter a number between 1 and 100: ");
//	scanf_s("%d", &b);
//	c = product(a, b);
//	printf("%d * %d = %d", a, b, c);
//
//}
////호출함수
//int product(int x, int y) {
//	return (x * y);
//}

// 화씨를 섭씨로 변환계산하는 프로그램

//// 화씨/섭씨 전환 프로그램
//#include <stdio.h>
//
////상수 정의
//#define frozen_degree 32.0
//#define range 1.8
//
//void main()
//{
//	float fa, ce;
//	printf("Enter Fahrenheit temperature: ");
//	scanf_s("%f", &fa);
//	//화씨 섭씨 전화 계산식
//	// 섭씨 = (화씨 - 32 ) /1.8
//	ce = (fa - frozen_degree) / range;
//	printf("Celsius equilvalent:  %f\n", ce); //소수점 6자리 (값이 반올림됨)
//	printf("Celsius equilvalent:  %.0f\n", ce); //소수점 0자리
//	printf("Celsius equilvalent:  %.1f\n", ce); // 소수점 1자리
//	printf("Celsius equilvalent:  %.3f\n", ce); // 소수점 3자리
//	return 0;
//}




// 2장 자료형과 선행처리기=====================================

// 상수, 변수 정의와 선언

////상수,변수 정의와 선언에 관한 프로그램
//#include <stdio.h>
//// 매크로정의 이용한 상수정의
//#define PI 3.141592
////const 이용한 상수정의
//const int K = 10;
//
//void main()
//{
//	double a; // 실수형 a 변수선언
//	a = K + PI;
//
//	// K = 20;  
//	// K는 상수값이므로 값을 변화시키면 에러발생 
//	printf("%f\n", a);
//
//	int x, y, z;  //변수 x,y,z 선언 (정수자료형)
//	x = 10; // 변수에 값 할당
//	y = 20;
//	z = x + y; 
//	printf("%d", z);
//
//
//	return 0;
//}

//자료형의 개념


////자료형의 개념
//#include <stdio.h>
////매크로 이용한 정수형, 실수형, 문자형 상수정의
//#define AGE 28
//#define PI 3.141592
//#define NAME "홍다나"
//
////const 를 이용한 정수형,실수형,문자형, 문자열 상수정의
//const int a = 10;
//const float b = 10.56789;
//const char c = 'K';
//const char* UNI ="말랑콩떡대학교";
//void main()
//{
//	// 정수형,실수형,문자형,문자열 변수 정의
//	int age = 28;
//	float grade = 4.0; 
//	char mark = 'A'; //문자는 홑따옴표
//	char name[10] = "홍다나"; // 문자열은 쌍따옴표
//	char* department = "computer science";
//
//	//상수값 출력
//	printf("학교는: %s 이름은 %s 나이는 %d\n\n",UNI,NAME,AGE); 
//	//변수값 출력
//	printf("%s %s 나이:%d 학점 %c 평점%.0f\n\n", name, department, age, mark, grade);
//}


//자료형의 범위(10만부터 11만까지 정수의 합)

////자료형의 범위(10만부터 11만까지 정수의 합)
//#include <stdio.h>
//void main()
//{
//	short int i, sum1 = 0; 
//	int sum2 = 0;
//	double sum3 = 0;
//
//	for(i = 10000; i < 11000; i++)
//	{
//		sum1 = sum1 + i;
//		sum2 = sum2 + i; 
//		sum3 = sum3 + i;
//	}
//
//	printf("10,000~11,000의 합(short int)=%d\n", sum1);
//	printf("10,000~11,000의 합(int)=%d\n", sum2);
//	printf("10,000~11,000의 합(double)=%f\n", sum3);
//
//	
//}
////실행결과
////10,000~11,000의 합(long )= 13740 //전혀 계산을 못함(short int 범위는 -32768~32767)
////10,000~11,000의 합(float )= 10499500
////10,000~11,000의 합(double )= 10499500.000000



//[ 선행처리기 ] 매크로 함수 정의

////매크로 함수 정의
//#include <stdio.h>
//// 매크로 인수 정의시 괄호 사용 유무
//#define sum1(x,y) x + y
//#define sum2(x,y) ((x)+(y))
//#define multiply1(x,y) x * y
//#define multiply2(x,y)((x)*(y))
//
//#define MAX(x,y) x>y?x:y //최대값 구하는 매크로 함수
//#define MIN(x,y) x<y?x:y //최소값구하는 매크로함수
//
//void main()
//{
//	int a, b, c, d;
//	a = 10 * sum1(3, 4); // a = 10*3+4 = 34
//	b = 10 * sum2(3, 4); // b = 10*((3)+(4)) = 70
//	c = multiply1(1 + 2, 3 + 4); //c = 1 + 2 * 3 + 4 = 11
//	d = multiply2(1 + 2, 3 + 4); //d = (1+2) * (3+4) = 21
//
//	printf("a = %d, b = %d\n", a, b);
//	printf("c = %d, d = %d\n", c, d);
// 
//	printf("최대값 : %d\n", MAX(10,20);
//	printf("최소값 : %d\n", MIN(10,20);
//	return 0;
//}


//[ 선행처리기 ] 조건부 컴파일 사용

////조건부 컴파일 사용 예
//#include <stdio.h>
//#define CONDITION 1
//void main()
//{
//#if CONDITION
//	printf("\n A프로그램을 컴파일");
//#else
//	printf("\n B프로그램을 컴파일");
//#endif	
//	return 0;
//}
//// 조건이 참이므로 실제 A프로그램이 컴파일됨


//factorial.h 헤더파일 만들어서 선행처리기 부분에 include 하기


//#include <stdio.h> // scanf(), prinf() 사용위한 파일포함
//#include <conio.h>  // 표준함수 getch()사용위한 파일포함
//#include "factorial.h" // 사용자정의 헤더파일 포함
//
//void main()
//{
//	int x;
//	printf("Enter number you want to factorial: ");
//	scanf_s("%d", &x); // scanf는 scanf_s 로 써주어야 에러안남
//	printf("%d ! = %d", x, factorial(x));
//	_getch(); // getch()는 _getch() 해줘야 에러안남
//	//gets(); // 키보드 통해 문자열 입력
//	
//}


// [ 선행처리기 ] 매크로 정의 해재프로그램

//#include <stdio.h>
//#define SIZE 100
//
//#if defined SIZE
//#undef SIZE
//#define SIZE 200
//#else
//#define SIZE 300
//#endif
//
//void main()
//{
//	printf("SIZE: %d\n", SIZE);
//	return 0;
//}



// 3. 입출력함수와 연산자=======================================

// 표준 입출력함수

// < 키보드 입력함수 > 
// scanf() 모든자료형 입력
// getchar(), getch() 문자형 자료입력
// gets() 문자열 자료입력

// < 화면 출력함수 >
// printf() 모든자료형 출력
// putchar(),putch() 문자형 자료 출력
// puts() 문자열 자료 출력

// < 버퍼를 사용하지 않는 문자 전용 입출력함수>
// getch() : 입력되는 글자를 화면에서 볼수 없음
// putch()

// 출력양식 변환기호
// %d 정수형, %f 실수형, %e,%E 실수형(지수형), %c 문자형, 
// %s 문자열포인터, %o 8진수, %x,%X 16진수

//입력양식 변환기호
// %d 정수형, %ld long정수형, %f 실수형, %lf double실수형, 
// %c 문자형, %s 문자열


//printf() 함수의 예

//#include <stdio.h>
//void main()
//{
//	char c = 'A';
//	int i = 10, j = 20, k = 30;
//	printf("간단한 출력 프로그램\n");
//	// 변수 c의 출력 자료형에 따라 출력이 달라짐.
//	printf("c=%c, c의 아스키 코드값은 %d\n", c, c);
//	printf("i=%d, j=%d, k=%d", i, j, k);
//	return 0;
//}

// 출력양식편집 (정렬)

//#include <stdio.h>
//void main()
//{
//	int a = 123;
//	float b = 123.45;
//	printf("|%d|\n", a);	//|123|
//	printf("|%5d|\n", a);	//|  123|  //총5자리 오른쪽부터
//	printf("|%-5d|\n", a);  //|123  |  //총5자리 왼쪽부터
//	printf("|%05d|\n", a);  //|00123|  //총5자리 오른쪽부터,공백은0으로
//	printf("|%6.1f|\n", b); //| 123.4| //총6자리 소수점이하1자리
//	printf("|%07.2f|\n", b);//|0123.45|//총7자리 소수점이하2자리,공백은0
//
//	return 0;
//}


//scanf_s() 함수 사용 예

//#include <stdio.h>
//#pragma warning(disable:4996)
//void main()
//{
//	int a,b;
//	float c,d;
//	printf("정수를 입력하세요\n");
//	scanf_s("%d %d", &a, &b);
//	printf("실수를 입력하세요\n");
//	scanf_s("%f %f", &c,&d);
//	printf("\n정수는 %d %d\n", a, b);
//	printf("실수는 %f %f\n", c, d);
//	
//	return 0;
//}


//getchar() 함수사용의 예

//#include <stdio.h>
//void main()
//{
//	char a;
//	printf("문자 하나를 입력하세요\n");
//	a = getchar(); // 한문자가 입력되면 문자형 변수 a에 저장
//	printf("a=%c\n", a);
//	return 0;
//}


//putchar()함수 사용의 예

//#include <stdio.h>
//void main()
//{
//	char var = 'A';  //문자 변수
//	putchar(var);    //A
//	putchar(var + 1);//A + 1 =  65 + 1 = 66 (아스키코드 B)
//	putchar('\n');   //줄바꿈
//	putchar('K');    //K
//	putchar('K' + 2);//K + 2 = (몰라도) = 알파벳 K의 다다음번째 알파벳인 M 유추가능
//	putchar('\007'); //\007 = \a (경고음alert 나타내는 제어문자)
//
//	return 0;
//}


//문자열 단위입력 gets() puts()
//gets() 함수 사용 예

// 공백이후의 문자열을 다 받기 위해서는 gets()가 scanf보다 효과적임
//#include <stdio.h>
//#pragma warning(disable:4996)
//
//void main()
//{
//	char s[50];
//	printf("문자열 입력?");
//	gets(s);
//	printf("gets()로 문자열 입력= %s\n", s);
//	printf("\n문자열 입력?");
//	scanf_s("%s", s);
//	printf("scanf()로 문자열 입력 = %s\n", s);
//	return 0;
//}

//puts() 함수 사용 예


//puts()는 자동줄바꿈이 되어 출력됨
//printf()는 줄바꿈하려면 \n 넣어줘야함
//#include <stdio.h>
//void main()
//{
//	char a[] = "computer";
//	char b[] = "science";
//	puts(a);
//	puts(b);
//	printf("%s", a);
//	printf("%s", b);
//
//	return 0;
//}



//연산자============================================================

// 산술연산자

//#include <stdio.h>
//void main()
//{
//	int x, y;
//	x = 10;
//	y = 3;
//	printf("x+y =%d\n", x + y);
//	printf("x/y =%d\n", x / y);
//	printf("x%%y =%d\n", x + y); // % 문자출력하기 위해 %를 두번연속으로 씀
//	
//	return 0;
//}


// ++, -- 연산자 사용 예

//#include <stdio.h>
//void main()
//{
//	int x = 5, a, b;
//	a = ++x * x--; 
//	b = x * 10;
//	printf("a = %d b= %d x=%d", a, b, x);
//}
//// a = ++x * x--; 
//// 1. ++x 수행 : x =x+1 이므로 x값이 5에서 6으로 됨
//// 2. ++x*x 수행 : 6 * 6 이므로 36
//// 3. x-- 수행 : 6-1 =5
//// 따라서 a = 36, b = 50


//관계연산자 : == 같은가, != 다른가, >>=<<= 대,소 관계를 비교

//#include <stdio.h>
//void main()
//{
//	int a = 4, b, c, d;
//	b = a > 2; // b=1 (참)
//	printf("b = %d\n", b);
//	c = a < 2; // b=0 (거짓)
//	printf("c = %d\n", c);
//	d= a == 4; // b=1 (참)
//	printf("d = %d\n", d);
//	return 0;
//}


//논리연산자 : && 논리곱(and), ||논리합(or), 논리부정(not)

//#include <stdio.h>
//void main()
//{
//	int a = 4, b = 7, c, d, e;
//	c = a > 2 && b <= 7;
//	printf("c=%d\n", c); // c = 1 (참)
//	d = a < 2 || b <= 7;
//	printf("d=%d\n", d); // d = 1 (참)
//	e = !a;
//	printf("e=%d\n", e); // e = 0 (거짓) a가 참이므로 논리부정
//	return 0;
//}


//대입연산자 : =, +=, -=, *=,/=, %=, &=. |=, ^=, <<=, >>=

//#include <stdio.h>
//void main()
//{
//	int a = 10, b = 3, c = 1;
//	a *= (b - 1); //a = a*(b-1) = 10*(3-1) = 20
//	b /= 2 + 3; // b = b/(2+3) = 3/(2+3) = 0.6인데 정수형이니 결과값은 0 
//	// 주의해야 할 점이 괄호 없어도 계산때는 (2+3)이 됨
//	c += 2; // c = c+2 = 1+2 = 3
//	printf("a=%d b=%d c=%d", a, b, c); //a=20,b=4.5,c=3
//	return 0;
//
//}