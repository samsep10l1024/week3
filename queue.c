//queue
//FIFO(First in First out ��) ��, ���� ��(add) ���� ���� ����(pop)

#define _CRT_SECURE_NO_WARNINGS
#define QUEUE_MAX 10
#define TRUE 1
#define FALSE 0

#include <stdio.h>

void add(); // Queue�� �ڷ� ���� ���
void pop(); // Queue�� �ڷ� ���� ���
void display(); // ��ȸ�ϴ� ���
void quit(); // �����ϴ� ���



int queueAry[QUEUE_MAX]; // �ִ� 10�� �迭 ����
int loopOnoff = FALSE; // True / False�� �ݺ��ϰų� �����ϰų� ����
int selctMenu = 0; // �޴� ������ ����
int frontPoint = 0; // ������ üũ
int endPoint = 0; // ���� üũ


main() {
	while (!loopOnoff) // loppOnOff �� False(�� = 0)�� �ƴѵ��� ���
	{
		printf("�Է� : ");
		scanf("%d", &selctMenu); // �޴� �Է¹޴� scanf
		fflush(stdin); // scanf �Է¹��ۿ� �����ִ� �� ����


		switch (selctMenu) { // �Է� �޴� ���ÿ� ���� �Լ����� ��� ����
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
		printf("1. �� �� \n2. �� �� \n3. �� ȸ \n4. �� ��\n");
	}
}

//�ڷ� �Է� �޴� add�Լ�
void add(void) {
	int inputValue = 0;
	// �Է� �޾��� �� frontpint�� 10���� ����� �������� 0�̸� ť�� �� á���ϴٸ� ���
	if ((endPoint + 1) % QUEUE_MAX == frontPoint) {
		printf("Queue�� �� á���ϴ�.\n");
	}
	// frontpoint�� 10���� ���� �������� 0�� �ƴϸ� �ڸ��� ����ִٴ� ���̹Ƿ� �Է¹���
	else {
		printf("������ �� : ");
		scanf("%d", &inputValue); // �� �Է¹���
		fflush(stdin); // ���� �� ����
		endPoint = (endPoint + 1) % QUEUE_MAX; //ť ��ġ(�������� ���� ���)����
		queueAry[endPoint] = inputValue; // ���� endpoint �ε��� ��ġ ť�� �� �Է� 
	}
}

//�ڷ� ������ pop�Լ�
void pop(void) {
	if (frontPoint == endPoint) { // frontend ���� 0�̸�  ���� �ڷᰡ �����Ƿ�
		printf("Queue�� ������ϴ�.\n");
	}
	else {
		printf("%d ť���� ������\n", queueAry[frontPoint+1]); // ó�� �Է��� ��, �� frontPoint �ε����� �ִ� queue �� ����ϸ� ���� �˸�
		frontPoint = (frontPoint + 1) % QUEUE_MAX; // ����Ʈ �ε��� ����
	}
}

void display(void) {
	printf("ť : ");
	for (int i = frontPoint; i < endPoint; i++) { 
		printf("%d ", queueAry[i+1]); //ó�� ��ġ���� �� ��ġ���� ���
	}
	printf("\n");
}

void quit(void) {
	printf("���α׷��� �����մϴ�.\n");
	loopOnoff = TRUE;
	exit(0);
}