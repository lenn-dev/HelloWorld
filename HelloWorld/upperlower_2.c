
// 입력된 문자열 길이 strlen 함수사용한 방법
//#include <stdio.h>
//int main()
//{
//	char string[32];
//
//	printf("대소문자로 구성된 문자열 입력 %d 자 이내", 32);
//	scanf_s("%s", string, 32);
//
//
//	int str_len = strlen(string);
//	for (int i = 0; i < str_len; i++)
//	{
//		if (string[i] >= 'a' && string[i] <= 'z')
//			string[i] -= 32;
//	}
//
//	printf("\n입력된 문자열(소문자는 대문자로 변환):%s \n", string);
//	return 0;
//}



// NULL 문자값 이용, 배열에 문자열 복사되면, 문자열 끝에 NULL 문자(0)값이 저장됨
// 이는 버퍼에 문자열의 끝을 의미하는 것으로, 문자열 관리하는 함수들이 
// 이 NULL 문자를 이용해 길이를 계산하여 문자열을 처리한다.
#include <stdio.h>
int main_J()
{
	char string[32];

	printf("대소문자로 구성된 문자열 입력 %d 자 이내", 32);
	scanf_s("%s", string, 32);


	for (int i = 0; string[i] != 0; i++)
	{
		if (string[i] >= 'a' && string[i] <= 'z')
			string[i] -= 32;
	}

	printf("\n입력된 문자열(소문자는 대문자로 변환):%s \n", string);
	return 0;
}

//while 문 이용해 포인터 변수 p가 가리키는 메모리값이 0이 아닐때까지 반복하도록
// 조건 구성, 즉 NULL문자가 나올때까지 포인터 변수 p가 가리키는 string배열의
// 모든 메모리에 접근하여 값을 체크하겠다는 의미
// 순차적으로 메모리에 접근하려면 주소 연산도 반드시 필요함
#include <stdio.h>
int main_s()
{
	char string[32];

	printf("대소문자로 구성된 문자열 입력 %d 자 이내", 32);
	scanf_s("%s", string, 32);

	char* p = string;
	while (*p)
	{
		// 포인터 p 변수가 가리키는 string 버퍼 문자가 소문자인지 체크하기 위해
		// ASCII코드 범위 내에 해당하는지 체크한다.
		if (*p >= 'a' && *p <= 'z')
		{
			//문자가 소문자라면 32를 빼 대문자로 변환한다.
			*p -= 32;
		}
		p++; //	다음 요소로 이동
			
	}
	printf("\n입력된 문자열(소문자는 대문자로 변환):%s \n", string);
	return 0;
}



void convertToUpperCase(char* sPtr)
{
	while (*sPtr != '\0')
	{
		if (islower(*sPtr))
			*sPtr = toupper(*sPtr);
	}
}