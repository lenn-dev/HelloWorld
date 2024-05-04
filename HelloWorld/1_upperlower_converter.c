/*대소문자 변환 프로그램, ASCII코드값 차이를 이용*/
#include <stdio.h>
#pragma warning (disable:4996)
char upper(char ch); // 사용자정의 함수 선언
char lower(char ch); // 사용자정의 함수 선언

int main() 
{
	char in_s[50] , out_s[50]; // 50자 이하  char형 배열선언, 입력문자, 출력문자 저장할 변수 선언
	char ch; // 문자열 안에 하나의 문자 넣을 변수
	int i = 0; //배열 인덱스 i 를 0으로 초기화
	printf("문자열을 입력하시오. (50자 이내) :"); //사용자에게 입력문자 넣으라는 안내문 출력
	scanf_s("%s",in_s,50); // 입력문자를 변수 in_s 에 넣음
	//printf("입력문자열은 %s\n",in_s);

	ch = in_s[i]; // ch 은 in_s 문자열에서 i 번째 문자, 초기값 0
	printf("%c", ch);

	// NULL == 0 == '\0'
	char* p = in_s;
	while (*p) // 문자가 Null 아닌경우에 루프를 도는 조건
	{
		if (ch >= 'A' && ch <= 'Z') // 문자가 대문자 A~Z 일 경우
			out_s[i] = lower(ch); // 문자열 해당 인덱스에 소문자 변환한 문자로 대체
		else if (ch >= 'a' && ch <= 'z')// 문자가 소문자 a~z 일 경우
			out_s[i] = upper(ch); // 문자열 해당 인덱스에 대문자 변환한 문자로 대체
		else
			out_s[i] = ch; // 알파벳이 아닌 것은 그대로 출력


	/*	if (*p >= 'a' && *p <= 'z')
			out_s[i] = upper(*p);
		else if (*p >= 'A' && *p <= 'Z')
			out_s[i] = lower(*p);
		else
			out_s[i] = *p;
		p++;*/

	}
	//out_s[i] = 0; // 문자사이 공백문자??
	printf("변환된 결과 ==> %s \n", out_s);

	return 0;
}

/*사용자 정의 함수*/
/*소문자를 대문자로 만들어 주는 함수
ASCII 코드에서 대문자 A~Z 는 65~90 이고, 소문자 a~z 는 97~122 이다.
즉, 대문자와 소문자 간의 차이가 32 가 나므로 이를 이용해
대문자에는 32를 더해주고, 소문자에는 32를 빼준 값을 반환하여
대소문자 변환을 한다.*/
char upper(char ch) {
	return ch - 32;
}
char lower(char ch) {
	return ch + 32;
}
