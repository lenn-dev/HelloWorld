// 구조체 배열을 사용한 프로그램
#include <stdio.h>
#pragma warning(disable:4996)

struct entry 
{
	char fname[20];
	char lname[20];
	char phone[10];
};

struct entry list[4];
int i;


int main_struc()
{
	for (i = 0; i < 4; i++)
	{
		printf("Enter first name : ");
		scanf("%s", list[i].fname);
		printf("Enter last name : ");
		scanf("%s", list[i].lname);
		printf("Enter phone number : ");
		scanf("%s", list[i].phone);
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < 4; i++)
	{
		printf("Name : %s %s", list[i].fname, list[i].lname);
		printf("\t\tphone : %s \n", list[i].phone);
	}

	return 0;
}