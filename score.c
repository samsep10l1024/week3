#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

const int SCORES[8] = { 95, 90, 85, 80, 75, 70, 65, 60}; //점수
const char* GRADE[9] = { "A+", "A", "B+", "B", "C+", "C", "D+", "D", "F" }; //학점

char calcScore(); // 입력된 점수에 따른 학점 계산

main() {

	int exit = 999; //종료 값
	int getScore = 0; // 점수입력

	printf("학점 프로그램\n종료를 원하면 \"999\" 를 입력\n");
	printf("[ 학점 테이블 ]\n");
	printf("점수 : %d	%d	%d	%d	%d	%d	%d	%d	%d\n", SCORES[0], SCORES[1], SCORES[2], SCORES[3], SCORES[4], SCORES[5], SCORES[6], SCORES[7], SCORES[8]);
	printf("학점 : %s	%s	%s	%s	%s	%s	%s	%s	%s\n", GRADE[0], GRADE[1], GRADE[2], GRADE[3], GRADE[4], GRADE[5], GRADE[6], GRADE[7], GRADE[8], GRADE[9]);


	while(1){	//무한루프

		printf("성적을 입력하세요 ( 0 ~ 100 ) : ");
		scanf("%d", &getScore); //성적 입력

		if (getScore == exit){ // 종료조건에 맞으면 반복문 탈출(종료)
			printf("학점 프로그램을 종료합니다.\n");
			break;
		}
		if (getScore < 0 || getScore > 100) { //유효 체크
			printf("성적을 올바르게 입력하세요. 범위는 0 ~ 100입니다.\n");
			continue;
		}
		
		calcScore(getScore); // 입력 점수 전달
	}
}


// 이 부분 분명 포인터를 사용하여 효율적으로 구현할 수 있는데... 지식이 부족합니다...
char calcScore(int getScores) {  // 전달 받은 점수에 따른 등급 반환...
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