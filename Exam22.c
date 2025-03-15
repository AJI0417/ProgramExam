#include "stdio.h"

int main() {
    int i, j, n;
    int temp = 0, count = 0;
    int number[100]; // 儲存數字的陣列
    FILE *f1 = fopen("Data22.txt", "r"); // 開啟檔案
    

    // 讀取排序順序
    fscanf(f1, "%d", &n);
	printf("%d\n",n);
	
    // 讀取數字
    while (fscanf(f1, "%d", &number[count]) != EOF) {
        count++;
    }
    
    // 印出讀取的數字
    for (i = 0; i < count; i++) {
        printf("%d ", number[i]);
    }
    printf("\n");

    // 根據排序順序進行排序
    if (n == 0) { // 升冪排序
        for (i = 0; i < count - 1; i++) {
            for (j = i + 1; j < count; j++) {
                if (number[j] < number[i]) {
                    temp = number[j];
                    number[j] = number[i];
                    number[i] = temp;
                }
            }
        }
    } else if (n == 1) { // 降冪排序
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

    // 輸出排序後的數字
    printf("Ans=");
    for (i = 0; i < count; i++) {
        printf("%d ", number[i]);
    }

    fclose(f1); // 關閉檔案
    return 0;
}

