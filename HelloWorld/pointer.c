#include <stdio.h>
void swap(int a, int b);
void swap_addr(int *a, int *b);
void changeArr(int* ptr);

int main_pointer(void) {

	//포인터
	//철수 : 101호 => 메모리 공간의 주소
	//영희 : 201호
	//민수 : 301호
	// 문 비밀번호
	//int 철수 = 1; //암호
	//int 영희 = 2;
	//int 민수 = 3;

	//printf("철수네 주소: %d, 암호: %d\n", &철수, 철수); //철수네 주소 : -906823260, 암호 : 1
	//printf("영희네 주소: %d, 암호: %d\n", &영희, 영희); //민수네 주소 : -906823228, 암호 : 2
	//printf("민수네 주소: %d, 암호: %d\n", &민수, 민수); //철수네 주소 : -906823196, 암호 : 3


	////================ 미션맨 ! ============================
	////====첫 번째 미션====: 아파트의 각 집에 방문하여 적힌 암호 확인

	//int *미션맨; //포인터 변수 (* : 포인터)
	//
	////미션맨은 철수네 주소값을 받도록 선언 (&: 주소)
	//미션맨 = &철수; 

	//// 미션맨이 가지고 있는 철수네주소를 통해 암호값을 알려면 *을 붙이면 됨.
	//// 미션맨이 철수네 주소를 알고 있기 때문에(&) 그 주소로 가서 암호를 확인함(*)
	//// 미션맨의 정수형 변수의 주소값을 통해서 정수형 변수의 값을 직접 알아볼 수 있는 것임
	//printf("미션맨이 방문하는 곳 주소: %d, 암호 : %d\n", 미션맨, *미션맨); //미션맨이 방문하는 곳 주소 : -906823260, 암호 : 1

	//미션맨 = &영희;
	//printf("미션맨이 방문하는 곳 주소: %d, 암호 : %d\n", 미션맨, *미션맨);//미션맨이 방문하는 곳 주소 : -906823228, 암호 : 2

	//미션맨 = &민수;
	//printf("미션맨이 방문하는 곳 주소: %d, 암호 : %d\n", 미션맨, *미션맨);// 미션맨이 방문하는 곳 주소 : -906823196, 암호 : 3


	////===== 두 번째 미션 ====: 각 암호에 3을 곱해라.

	//// 미션맨 철수네 주소값으로 감
	//미션맨 = &철수;
	//// 미션맨의 값은 미션맨 값에 3을 곱한 값이라고 정의 (미션맨의 값은 *붙임)
	//*미션맨 = *미션맨 * 3;
	//printf("미션맨이 암호를 바꾼 곳 주소: %d, 암호 : %d\n", 미션맨, *미션맨); // 미션맨이 암호를 바꾼 곳 주소 : -906823260, 암호 : 3
	//
	//미션맨 = &영희;
	//*미션맨 = *미션맨 * 3;
	//printf("미션맨이 암호를 바꾼 곳 주소: %d, 암호 : %d\n", 미션맨, *미션맨); // 미션맨이 암호를 바꾼 곳 주소 : -906823228, 암호 : 6

	//미션맨 = &민수;
	//*미션맨 = *미션맨 * 3;
	//printf("미션맨이 암호를 바꾼 곳 주소: %d, 암호 : %d\n", 미션맨, *미션맨); // 미션맨이 암호를 바꾼 곳 주소 : -906823196, 암호 : 9

	////================= 스파이(또 다른 포인터) ========================
	//// 미션맨이 바꾼 암호에서 2를 빼라!
	//// 두 개의 포인터 변수들이 하나의 메모리 주소를 가리킬 수 있음
	//int *스파이 = 미션맨; 
	//
	//printf("\n...스파이가 미션 수행하는 중...\n\n");
	//
	//// 스파이가 철수네 주소로 먼저 감.
	//스파이 = &철수; 
	//// 스파이가 간 곳의 암호값에 2를 뺀값이 스파이 값으로 정의
	//*스파이 = *스파이 - 2; // 철수 = 철수- 2; 와 완전히 같은 문장
	//printf("스파이가 방문하는 곳 주소: %d  암호 : %d\n", 스파이, *스파이); // 스파이가 방문하는 곳 주소 : -906823260, 암호 : 1

	//스파이 = &영희;
	//*스파이 = *스파이 - 2; 
	//printf("스파이가 방문하는 곳 주소: %d  암호 : %d\n", 스파이, *스파이);// 스파이가 방문하는 곳 주소 : -906823228, 암호 : 4

	//스파이 = &민수;
	//*스파이 = *스파이 - 2; 
	//printf("스파이가 방문하는 곳 주소: %d  암호 : %d\n", 스파이, *스파이);// 스파이가 방문하는 곳 주소 : -906823196, 암호 : 7


	//printf("\n ...철수 영희 민수는 집에 돌아와서 바뀐 암호를 보고 깜놀\n\n");

	//printf("현재 철수네 주소 : %d, 암호 :%d\n", &철수, 철수);
	//printf("현재 영희네 주소 : %d, 암호 :%d\n", &영희, 영희);
	//printf("현재 민수네 주소 : %d, 암호 :%d\n\n", &민수, 민수);

	////참고로 미션맨이 사는 곳의 주소는 &미션맨으로 확인
	//printf("미션맨의 주소 : %d\n", &미션맨);
	//printf("스파이의 주소: %d\n", &스파이);

	//=============== 배열과 포인터의 관계 ======================
	//int arr[3] = { 5,10,15 };
	//int * ptr = arr;
	//
	//for (int i = 0; i < 3; i++) {
	//	printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
	//}
	//for (int i = 0; i < 3; i++) {
	//	printf("포인터 arr[%d]의 값 : %d\n", i, ptr[i]);
	//}

	//arr[0] = 100; 
	//arr[1] = 200;
	//arr[2] = 300;

	//for (int i = 0; i < 3; i++) {
	//	//("배열 arr[%d]의 값 : %d\n", i, arr[i]);
	//	printf("배열 arr[%d]의 값 : %d\n", i, *(arr + i)); 
	//}
	//for (int i = 0; i < 3; i++) {
	//	//printf("포인터 arr[%d]의 값 : %d\n", i, ptr[i]);
	//	printf("포인터 arr[%d]의 값 : %d\n", i, ptr[i]);
	//}

	////*(arr + i) == arr[i] 와 똑같은 표현
	////arr 은 arr 배열의 첫번째 값의 주소와 동일, 즉 arr[0] 과 같다.
	//printf("arr 자체 주소값 : %d\n", arr);
	//printf("arr[0]의 주소 : %d\n", &arr[0]);

	//printf("arr 자체 주소값이 가지는 실제값 : %d\n", *arr); // *(arr+0)
	//printf("arr[0]의 실제 값 : %d\n", *&arr[0]);// 왜 구지 이렇게 표현?
	//printf("arr[0]의 실제 값 : %d\n", arr[0]);

	////*& 둘이 같이 있으면 아무것도 없는 것과 같다. 
	//// &는 주소이고, * 는 그 주소의 값이기 때문에 서로 상쇄된다.
	//printf("arr[0]의 실제 값 : %d\n", *&*&*&*&*&*&*&*&*&*&arr[0]);
	//printf("arr[0]의 실제 값 : %d\n", arr[0]);


	//================ Swap =====================================
	//int a = 10; 
	//int b = 20; 
	//printf("a 값의 주소: %d\n", &a);
	//printf("b 값의 주소: %d\n", &b);

	//// a와 b의 값을 바꾼다. 
	//printf("Swap 함수 전 => a : %d, b : %d\n", a, b); //10,20
	//swap(a, b);
	//printf("Swap 함수 후 => a : %d, b : %d\n", a, b); //10,20

	//// 함수 적용 후에도 값이 그대로임, (함수 내에서는 바뀌었음에도 불구하고, 왜?)
	//// 값에 의한 복사( Call by Value) => 값만 복사한다는 의미
	//
	//// 함수 밖과 안에서의 주소값을 찍어보면 됨 => 주소가 다르다는 것을 확인
	//// 주소값을 넘기면? (메모리 공간에 있는 주소값 자체를 넘기면..
	//// 주소값을 전달하기 위해 & 를 붙이고 
	//// 함수안에서 주소값을 받기 위해서는 * 포인터 선언을 해야함.
	//printf("(주소값 전달) Swap 함수 전 => a : %d, b : %d\n", a, b); //10,20
	//swap_addr(&a, &b);
	//printf("(주소값 전달) Swap 함수 후 => a : %d, b : %d\n", a, b); //10,20


	// =============== 포인터로 배열 값 변경하기 ==============

	// 배열일 때, arr2 가 즉 주소임
	int arr2[3] = { 10,20,30 };
	// 배열일 때, arr2 가 즉 주소임
	//changeArr(arr2); // 주소를 변수로 주었음.
	changeArr(&arr2[0]); // 배열 자체의  주소를 던짐, 윗 코드랑 같은말
	for (int i = 0; i < 3; i++)
	{
		 printf("%d\n", arr2[i]);
	 }

	//scanf 에서 &num 과 같이 & 를 사용하는 이유가 주소를 그대로 받기 위함.

	return 0; 
}

void swap(int a, int b) 
{
	printf("a 값의 (swap함수 내) 주소: %d\n", &a);
	printf("b 값의 (swap함수 내) 주소: %d\n", &b);
	int temp = a;
	a = b;
	b = temp; 
	printf("Swap 함수 내 => a : %d, b : %d\n", a, b);//20,10
}

void swap_addr(int *a, int *b) // 포인터 변수로 받음
{
	// 받은 a 가 주소값이니까 temp 에 a의 값(*)을 넣는다 
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("(주소값 전달) Swap 함수 내 => a : %d, b : %d\n", *a, *b);
}

void changeArr(int *ptr)
{
	// 받은 배열의 주소에서 두 번째 인덱스 값을 50으로 바꾼다.
	ptr[2] = 50; 
}