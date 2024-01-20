#include <stdio.h>

//선언 (main 함수 위에서- why?)
void p(int num);

void function_without_return();
int function_with_return();
void function_without_param();
void function_with_param(int num1, int num2, int num3);
int apple(int total, int ate);
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main_function(void) 
{
	//function
	//계산기

	//int num = 2; 
	////printf("num은 %d 입니다.\n", num); //2
	//p(num);

	////2 + 3
	//num += 3; 
	////printf("num은 %d 입니다.\n", num); //5
	//p(num);

	////5 * 6
	//num *= 6;
	////printf("num은 %d 입니다.\n", num); //30
	//p(num);

	////30 / 5
	//num /= 5;
	////printf("num은 %d 입니다.\n", num); //6
	//p(num);

	//함수종류
	//반환값이 없는 함수
	function_without_return();

	//반환값이 있는 함수 
	int ret = function_with_return();
	p(ret);

	//전달값이 없는 함수
	function_without_param();

	//전달값이 있는 함수
	function_with_param(35,27,14);

	//전달값과 반환값이 있는 함수
	int ret2 = apple(5, 2); // 5개의 사과중에서 2개를 먹었어요.
	printf("사과 5개 중 2개를 먹고 %d 개가 남았어요\n", ret2);
	printf("총 %d 의 사과 중 %d개를 먹고 %d 가 남았습니다.\n", 10, 4, apple(10,4));
	

	//계산기 함수
	int num = 20; 
	num = add(num, 30);
	p(num);

	num = sub(num, 2);
	p(num);

	num = mul(num, 2);
	p(num);

	num = div(num, 2);
	p(num);

	return 0;


}

// 정의 (main 함수 아래서)
void p(int num) {
	printf("num 은 %d 입니다\n", num);
}

void function_without_return() {
	printf("반환값이 없는 함수입니다.\n");
}

int function_with_return() {
	printf("반환값이 있는 합수입니다.\n");
	return 10;
}

void function_without_param() {
	printf("전달값이 없는 함수입니다.\n");
}

void function_with_param(int num1, int num2, int num3) {
	printf("전달값이 있는 함수이며, 전달받은 값은 %d, %d, %d 입니다.\n", 
		num1, num2, num3);
}

int apple(int total, int ate) {
	printf("전달값과 반환값이 있는 함수입니다.\n");
	return total - ate;
}

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int div(int a, int b) {
	return a / b;
}