#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

const int SCORES[8] = { 95, 90, 85, 80, 75, 70, 65, 60}; //����
const char* GRADE[9] = { "A+", "A", "B+", "B", "C+", "C", "D+", "D", "F" }; //����

char calcScore(); // �Էµ� ������ ���� ���� ���

main() {

	int exit = 999; //���� ��
	int getScore = 0; // �����Է�

	printf("���� ���α׷�\n���Ḧ ���ϸ� \"999\" �� �Է�\n");
	printf("[ ���� ���̺� ]\n");
	printf("���� : %d	%d	%d	%d	%d	%d	%d	%d	%d\n", SCORES[0], SCORES[1], SCORES[2], SCORES[3], SCORES[4], SCORES[5], SCORES[6], SCORES[7], SCORES[8]);
	printf("���� : %s	%s	%s	%s	%s	%s	%s	%s	%s\n", GRADE[0], GRADE[1], GRADE[2], GRADE[3], GRADE[4], GRADE[5], GRADE[6], GRADE[7], GRADE[8], GRADE[9]);


	while(1){	//���ѷ���

		printf("������ �Է��ϼ��� ( 0 ~ 100 ) : ");
		scanf("%d", &getScore); //���� �Է�

		if (getScore == exit){ // �������ǿ� ������ �ݺ��� Ż��(����)
			printf("���� ���α׷��� �����մϴ�.\n");
			break;
		}
		if (getScore < 0 || getScore > 100) { //��ȿ üũ
			printf("������ �ùٸ��� �Է��ϼ���. ������ 0 ~ 100�Դϴ�.\n");
			continue;
		}
		
		calcScore(getScore); // �Է� ���� ����
	}
}


// �� �κ� �и� �����͸� ����Ͽ� ȿ�������� ������ �� �ִµ�... ������ �����մϴ�...
char calcScore(int getScores) {  // ���� ���� ������ ���� ��� ��ȯ...
	if (getScores >= SCORES[0]) {
		printf("%s\n", GRADE[0]);
	}
	else if (getScores < SCORES[0] && getScores >= SCORES[1]) {
		printf("%s\n", GRADE[1]);
	}
	else if (getScores < SCORES[1] && getScores >= SCORES[2]) {
		printf("%s\n", GRADE[2]);
	}
	else if (getScores < SCORES[2] && getScores >= SCORES[3]) {
		printf("%s\n", GRADE[3]);
	}
	else if (getScores < SCORES[3] && getScores >= SCORES[4]) {
		printf("%s\n", GRADE[4]);
	}
	else if (getScores < SCORES[4] && getScores >= SCORES[5]) {
		printf("%s\n", GRADE[5]);
	}
	else if (getScores < SCORES[5] && getScores >= SCORES[6]) {
		printf("%s\n", GRADE[6]);
	}
	else if (getScores < SCORES[6] && getScores >= SCORES[7]) {
		printf("%s\n", GRADE[7]);
	}
	else if (getScores < SCORES[7] && getScores >= SCORES[8]) {
		printf("%s\n", GRADE[8]);
	}
	else printf("%s\n", GRADE[9]);

	return 0;
}