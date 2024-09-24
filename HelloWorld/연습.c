# include <stdio.h>

void main_gets() {
	char input[32];
	gets(input);
	printf("user input:%s\n", input);
}