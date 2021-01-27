#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define SIZE 500000

int main(int arge, char* argv[]) {
    int n;
    int R_sum =0; //파일에 있는 모든 값을 다 더할 변수
    int F_sum =0; // 파일에 있는 숫자를 모두 더한 뒤 저장할 변수

    scanf("%d", &n); //파일에 있는 맨 처음의 숫자를 입력 받는다. txt 파일에 1번 째 줄 (10, 100 같은...) 그후 Enter입력으로 개행되므로 넘어간다.

    // 1부터 N의 숫자중 K가 빠진 배열
    int partArr[SIZE]; //위에 정의된 SIZE(500000) 만큼 메모리 할당
    int lengthOfPartArr = n - 1; //불러온 파일에 있는 숫자에서 -1을 해줌

    for (int j = 0; j <= n; j++) { //n으로 입력받은 수 ex 100이면 100까지 더해서 가지고 있음
        R_sum += j;
    }

    for (int i = 0; i < lengthOfPartArr; i++) { // 100까지일 경우,,, i = 0 ~ 99까지 배열을 입력받음, 즉 파일에 있는 모든 수를 입력한다.
        scanf("%d", &partArr[i]); // 입력 받을 때 띄어쓰기를 만나면 다음 배열로 넘어감
        F_sum += partArr[i]; // 파일에 있는 값들 저장
    }

    printf("K = %d", R_sum - F_sum);
    // TODO: n과 partArr를 이용하여, K를 구하라
    return 0;
}