// 자료구조 4강 큐
// 그림 4-7/4-9/4-11 : 큐 생성 -> 큐 삽입(결과출력)..

//#pragma warning (disalbe:4996)
#define QUEUE_SIZE 5
#include <stdio.h>

typedef int element;
element queue[QUEUE_SIZE];
int rear = -1;
int front = -1;

void PrintQueue() {
	int i;
	printf("\nQUEUE 상태: ");
	for (i = 0; i < QUEUE_SIZE; i++) {
		printf("[%d]=%5d   ", i, queue[i]);
	}
	printf("\n");
	printf("\n");
}

void createQueue(int n) {
	int i;
	for (i = 0; i < n; i++) {
		queue[i] = -1;
	}
	printf("큐를 초기화하였습니다 \n");
	PrintQueue();
}

element Delete_q() {
	int delvalue;
	printf("큐의 Delete연산을 실행합니다. \n");
	if (front == rear) {
		printf("Error : Queue is Empty!! \n");
		return 0;
	}
	else {
		delvalue = queue[++front];
		printf("Queue[%d] output %d delete success! \n", front, queue[front]);
		queue[front] = 0;
		return delvalue;
	}
}

void Add_q() {
	element item;

	printf("큐에 저장할 값을 입력하세요: ");
	scanf_s("%d", &item);

	if (rear >= QUEUE_SIZE - 1) {
		printf("Error : Queue is Full!! \n");
		return;
	}
	else {
		queue[++rear] = item;
		printf("queue[%d] input %d : add success! \n", rear, queue[rear]);
	}
}

void main_queue() {
	createQueue(QUEUE_SIZE);
	Add_q();
	PrintQueue();
	Add_q();
	PrintQueue();
	Delete_q();
	PrintQueue();
	Delete_q();
	PrintQueue();
	Delete_q();
	PrintQueue();
	Add_q();
	PrintQueue();
	printf("The End \n");
}