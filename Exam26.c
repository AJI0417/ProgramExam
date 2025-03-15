#include <stdio.h>

//―碭计 
int count_digits(int num) {
    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

//緇计讽计 
int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum % 10;  //  10 緇计
}

int main() {
    int N,i, num, max_value = -1, max_number;
    
    // 弄计计秖
    FILE *file = fopen("Data26.txt", "r");
    
    fscanf(file, "%d", &N);  // 弄 N
    printf("%d\n", N);       // 陪ボ N
    
    for (i = 0; i < N; i++) {
        fscanf(file, "%d", &num);  // 弄计
        printf("%d ", num);
        // 璸衡穝计
        int new_value = count_digits(num) * 10 + sum_of_digits(num);
        
        
        // 程耞 
        if (new_value > max_value) {
            max_value = new_value;
            max_number = num;
        }
    }
    
    fclose(file);  // 闽超郎
    printf("\n");
    printf("Ans=%d %d", max_value, max_number);
    
    return 0;
}

