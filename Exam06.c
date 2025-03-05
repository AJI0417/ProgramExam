#include <stdio.h>
#include <stdlib.h>

// 計算最大公因數（GCD）：輾轉相除法
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 計算最小公倍數（LCM）
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;  // 防止溢出，先除後乘
}

int main() {
    FILE *f1;
    int num[10];  // 假設最多10個整數
    int count = 0;
    int result,i;

    // 開啟檔案
    f1 = fopen("Data06.txt", "r");
    // 讀取整數
    while (fscanf(f1, "%d", &num[count]) == 1) {
        printf("%d ", num[count]);
        count++;
        if (count == 10) break; 
    }
    printf("\n");

    // 關閉檔案
    fclose(f1);

    // 計算最小公倍數（LCM）
    if (count > 0) {
        result = num[0];
        for (i = 1; i < count; i++) {
            result = lcm(result, num[i]);
        }
        printf("Ans=%d", result);
    }

    return 0;
}

