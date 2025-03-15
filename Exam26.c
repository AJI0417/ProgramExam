#include <stdio.h>

//�D�X��� 
int count_digits(int num) {
    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

//�l�Ʒ�Ӧ�� 
int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum % 10;  // �� 10 ���l��
}

int main() {
    int N,i, num, max_value = -1, max_number;
    
    // Ū���Ʀr�ƶq
    FILE *file = fopen("Data26.txt", "r");
    
    fscanf(file, "%d", &N);  // Ū�� N
    printf("%d\n", N);       // ��� N
    
    for (i = 0; i < N; i++) {
        fscanf(file, "%d", &num);  // Ū���Ʀr
        printf("%d ", num);
        // �p��s�ƭ�
        int new_value = count_digits(num) * 10 + sum_of_digits(num);
        
        
        // �̤j�ȧP�_ 
        if (new_value > max_value) {
            max_value = new_value;
            max_number = num;
        }
    }
    
    fclose(file);  // �����ɮ�
    printf("\n");
    printf("Ans=%d %d", max_value, max_number);
    
    return 0;
}

