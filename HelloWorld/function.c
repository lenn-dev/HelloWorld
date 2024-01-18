#include <stdio.h>

//선언 (main 함수 위에서- why?)
void p(int num);

int main(void) 
{
	//function
	//계산기

	int num = 2; 
	//printf("num은 %d 입니다.\n", num); //2
	p(num);

	//2 + 3
	num += 3; 
	//printf("num은 %d 입니다.\n", num); //5
	p(num);

	//5 * 6
	num *= 6;
	//printf("num은 %d 입니다.\n", num); //30
	p(num);

	//30 / 5
	num /= 5;
	//printf("num은 %d 입니다.\n", num); //6
	p(num);

	return 0;
}

// 정의 (main 함수 아래서)
void p(int num) {
	printf("num은 %d 입니다\n", num);
}