
/*대소문자 변환 프로그램, ASCII코드값 차이를 이용*/
#include <stdio.h>
#pragma warning (disable:4996)
char upper(char ch); // 사용자 정의 함수 upper 선언
char lower(char ch); // 사용자 정의 함수 lower 선언

void main_upperlower() 
{
	char in_s[50], out_s[50]; // 50자 이하 char형 배열선언, 입출력문자열 저장할 변수 선언
	char ch; // 하나의 문자 넣을 변수 선언
	int i = 0; // 배열루프에 쓸 인덱스 i를 0으로 초기화
	printf("문자열을 입력하시오. (50자 이내) :"); //사용자에게 입력문자 넣으라는 안내문 출력
	scanf("%s",in_s); // 입력문자를 변수 in_s 에 넣음

	ch = in_s[i]; // in_s 문자열 중 i번째 문자로 ch변수 초기화, i 값이 0으로 초기화 되어있으므로 in_s[0]
	//printf("%c", ch);

	// NULL == 0 == '\0'
	// scanf로 입력받은 문자열은 NULL 문자가 자동 입력되므로 이를 while문 조건으로 사용
	while (ch != '\0'){ // 해당문자가 NULL 아닌 경우에 루프를 도는 조건
		
		if (ch >= 'A' && ch <= 'Z') // 문자가 대문자 A~Z 일 경우
			out_s[i] = lower(ch); // 출력할 배열의 해당 인덱스에 소문자로 변환한 문자로 저장
		else if (ch >= 'a' && ch <= 'z')// 문자가 소문자 a~z 일 경우
			out_s[i] = upper(ch); // 출력할 배열의 해당 인덱스에 대문자로 변환한 문자로 저장
		else
			out_s[i] = ch; // 알파벳 대소문자가 아니라면 그대로 출력
		i++; // 인덱스 1씩 증가시켜 문자열의 다음 문자체크
		ch = in_s[i]; // ch 변수를 i의 증가값을 갖도록 다시 초기화. 
	}
	out_s[i] = 0; // 출력할 배열 마지막 값 NULL 값으로 넣어주어 문자열 끝을 알려주기. 넣지 않을경우 쓰레기 값 함께 출력됨.
	printf("변환된 결과 ==> %s \n", out_s);
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



/*scanf 함수와 scanf_s 함수의 차이
두 함수는 표준입력(키보드)에 입력한 내용을 포맷에 맞게 얻어오는 함수임
그리고 scanf_s 는 scanf 함수의 안전한 버전의 함수
%s 포맷은 공백이나 탭, 엔터를 만나기 전까지 문자열만 변환함
공백을 포함한 문자열을 입력받을 때는 gets나 gets_s를 사용하길.*/