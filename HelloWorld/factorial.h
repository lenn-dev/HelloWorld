#include <stdio.h>
#define ONE 1
//���丮�� 
//n! = n*(n-1)*(n-2)*(n-3)....3*2*1
//0! = 1
//���ȣ��
int factorial(int n)
{
	if (n > ONE)
		return(n * factorial(n - 1));
	else
		return(ONE);
}