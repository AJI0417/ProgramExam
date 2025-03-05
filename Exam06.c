#include <stdio.h>
#include <stdlib.h>

// �p��̤j���]�ơ]GCD�^�G����۰��k
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// �p��̤p�����ơ]LCM�^
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;  // ����X�A�����᭼
}

int main() {
    FILE *f1;
    int num[10];  // ���]�̦h10�Ӿ��
    int count = 0;
    int result,i;

    // �}���ɮ�
    f1 = fopen("Data06.txt", "r");
    // Ū�����
    while (fscanf(f1, "%d", &num[count]) == 1) {
        printf("%d ", num[count]);
        count++;
        if (count == 10) break; 
    }
    printf("\n");

    // �����ɮ�
    fclose(f1);

    // �p��̤p�����ơ]LCM�^
    if (count > 0) {
        result = num[0];
        for (i = 1; i < count; i++) {
            result = lcm(result, num[i]);
        }
        printf("Ans=%d", result);
    }

    return 0;
}

