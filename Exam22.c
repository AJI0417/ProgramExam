#include "stdio.h"

int main() {
    int i, j, n;
    int temp = 0, count = 0;
    int number[100]; // �x�s�Ʀr���}�C
    FILE *f1 = fopen("Data22.txt", "r"); // �}���ɮ�
    

    // Ū���ƧǶ���
    fscanf(f1, "%d", &n);
	printf("%d\n",n);
	
    // Ū���Ʀr
    while (fscanf(f1, "%d", &number[count]) != EOF) {
        count++;
    }
    
    // �L�XŪ�����Ʀr
    for (i = 0; i < count; i++) {
        printf("%d ", number[i]);
    }
    printf("\n");

    // �ھڱƧǶ��Ƕi��Ƨ�
    if (n == 0) { // �ɾ��Ƨ�
        for (i = 0; i < count - 1; i++) {
            for (j = i + 1; j < count; j++) {
                if (number[j] < number[i]) {
                    temp = number[j];
                    number[j] = number[i];
                    number[i] = temp;
                }
            }
        }
    } else if (n == 1) { // �����Ƨ�
        for (i = 0; i < count - 1; i++) {
            for (j = i + 1; j < count; j++) {
                if (number[j] > number[i]) {
                    temp = number[j];
                    number[j] = number[i];
                    number[i] = temp;
                }
            }
        }
    }

    // ��X�Ƨǫ᪺�Ʀr
    printf("Ans=");
    for (i = 0; i < count; i++) {
        printf("%d ", number[i]);
    }

    fclose(f1); // �����ɮ�
    return 0;
}

