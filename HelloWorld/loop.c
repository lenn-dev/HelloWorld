#include <stdio.h>
int main_loop(void)
{
	//printf("Hello World");

	//++ 뿔뿔
	/*int a = 10;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);*/


	//int b = 20; 
	////b = b+1;
	//printf("b는 %d\n", ++b);//21
	//printf("b는 %d\n", b++);//21 출력 후 1더해서 b값은 22
	//// b++은 문장이 끝난뒤에 더하라는 뜻
	//// 따라서 
	//printf("b는 %d\n", b);// 따라서 b 출력시 22


	//반복문
	//for, while, do while

	//for (선언; 조건; 증감)
	/*for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i);
	}*/


	//while (조건) { }
	//int i = 1; 
	//while (i <= 10)
	//{
	//	printf("Hello World %d\n", i++);
	//	//i++;
	//}


	//do { } while (조건);
	/*int i = 1; 
	do {
		printf("Hello World %d\n", i++);
	} while (i<= 10);*/


	//2중 반복문 
	
	//구구단 만들기
	/*for (int i = 2; i <= 9; i++)
	{
		printf(" <구구단 %d 단>\n", i);
		
		for (int j = 1; j <= 9; j++)
		{
			printf(" %d", i*j);
		}
		printf("\n");
		printf("\n"); 
	}*/
	//아래 두 코드의 차이가 있나?
	//printf("%d * %d = %d\n", i, j, i * j); 
	//printf(" %d", i*j);


	//별로 피라미드 찍기
	/*for (int i = 0; i <= 5; i++) 
	{
		for (int j = 0; j <= i; j++) {
			printf("*" );
		}
		printf("\n");
	}*/

	//대칭이 되는 피라미드 찍기
	/*for (int i = 0; i <= 5; i++)
	{
		for (int j = i; j <= 5-1; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}*/



	//거꾸로 별 피라미드 찍기
	/*for (int i = 5; i >= 0; i--)
	{
		for (int j = 0; j <= i; j++) {
			printf("*" );
		}
		printf("\n");
	}*/


	// 피라미드 쌓기
	/*
	    *
	   ***
	  *****
	 *******
	*********
	*/
	int num; 
	printf("몇 층으로 쌓겠느냐?");
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++)
	{
		for (int j = i; j < num-1; j++) {
			printf(" ");
		}
		for (int k = 1; k <= i* 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	// int k =0 일 때 원하는 결과 나오지 않음

	
	return 0;
}