//queue
//FIFO(First in First out 임) 즉, 먼저 들어간(add) 값이 먼저 나옴(pop)

#define _CRT_SECURE_NO_WARNINGS
#define QUEUE_MAX 10
#define TRUE 1
#define FALSE 0

#include <stdio.h>

void add(); // Queue에 자료 삽입 기능
void pop(); // Queue에 자료 삭제 기능
void display(); // 조회하는 기능
void quit(); // 종료하는 기능



int queueAry[QUEUE_MAX]; // 최대 10인 배열 선언
int loopOnoff = FALSE; // True / False로 반복하거나 종료하거나 선택
int selctMenu = 0; // 메뉴 선택할 변수
int frontPoint = 0; // 시작점 체크
int endPoint = 0; // 끝점 체크


main() {
	while (!loopOnoff) // loppOnOff 가 False(값 = 0)가 아닌동안 계속
	{
		printf("입력 : ");
		scanf("%d", &selctMenu); // 메뉴 입력받는 scanf
		fflush(stdin); // scanf 입력버퍼에 남아있던 값 제거


		switch (selctMenu) { // 입력 받는 선택에 따라 함수에서 기능 수행
			case 1 :
				add();
				break;
			case 2 :
				pop();
				break;
			case 3 :
				display();
				break;
			case 4 :
				quit();
				break;
			default:
				break;
		}
		printf("1. 삽 입 \n2. 삭 제 \n3. 조 회 \n4. 종 료\n");
	}
}

//자료 입력 받는 add함수
void add(void) {
	int inputValue = 0;
	// 입력 받았을 때 frontpint를 10으로 나누어서 나머지가 0이면 큐가 꽉 찼습니다를 출력
	if ((endPoint + 1) % QUEUE_MAX == frontPoint) {
		printf("Queue가 꽉 찼습니다.\n");
	}
	// frontpoint를 10으로 나눈 나머지가 0이 아니면 자리가 비어있다는 것이므로 입력받음
	else {
		printf("삽입할 값 : ");
		scanf("%d", &inputValue); // 값 입력받음
		fflush(stdin); // 버퍼 값 제거
		endPoint = (endPoint + 1) % QUEUE_MAX; //큐 위치(나머지를 통해 계산)저장
		queueAry[endPoint] = inputValue; // 현재 endpoint 인덱스 위치 큐에 값 입력 
	}
}

//자료 꺼내는 pop함수
void pop(void) {
	if (frontPoint == endPoint) { // frontend 값이 0이면  꺼낼 자료가 없으므로
		printf("Queue가 비었습니다.\n");
	}
	else {
		printf("%d 큐에서 삭제됨\n", queueAry[frontPoint+1]); // 처음 입력한 것, 즉 frontPoint 인덱스에 있는 queue 값 출력하며 삭제 알림
		frontPoint = (frontPoint + 1) % QUEUE_MAX; // 프론트 인덱스 증가
	}
}

void display(void) {
	printf("큐 : ");
	for (int i = frontPoint; i < endPoint; i++) { 
		printf("%d ", queueAry[i+1]); //처음 위치부터 끝 위치까지 출력
	}
	printf("\n");
}

void quit(void) {
	printf("프로그램을 종료합니다.\n");
	loopOnoff = TRUE;
	exit(0);
}