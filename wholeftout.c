#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define SIZE 500000

int main(int arge, char* argv[]) {
    int n;
    int R_sum =0; //���Ͽ� �ִ� ��� ���� �� ���� ����
    int F_sum =0; // ���Ͽ� �ִ� ���ڸ� ��� ���� �� ������ ����

    scanf("%d", &n); //���Ͽ� �ִ� �� ó���� ���ڸ� �Է� �޴´�. txt ���Ͽ� 1�� ° �� (10, 100 ����...) ���� Enter�Է����� ����ǹǷ� �Ѿ��.

    // 1���� N�� ������ K�� ���� �迭
    int partArr[SIZE]; //���� ���ǵ� SIZE(500000) ��ŭ �޸� �Ҵ�
    int lengthOfPartArr = n - 1; //�ҷ��� ���Ͽ� �ִ� ���ڿ��� -1�� ����

    for (int j = 0; j <= n; j++) { //n���� �Է¹��� �� ex 100�̸� 100���� ���ؼ� ������ ����
        R_sum += j;
    }

    for (int i = 0; i < lengthOfPartArr; i++) { // 100������ ���,,, i = 0 ~ 99���� �迭�� �Է¹���, �� ���Ͽ� �ִ� ��� ���� �Է��Ѵ�.
        scanf("%d", &partArr[i]); // �Է� ���� �� ���⸦ ������ ���� �迭�� �Ѿ
        F_sum += partArr[i]; // ���Ͽ� �ִ� ���� ����
    }

    printf("K = %d", R_sum - F_sum);
    // TODO: n�� partArr�� �̿��Ͽ�, K�� ���϶�
    return 0;
}