#include <stdio.h>

// 재귀적으로 2진수 변환을 수행하는 함수
void decimalToBinary(int n) {
    if (n == 0) {
        return;
    }
    decimalToBinary(n / 2);  // n을 2로 나눈 몫을 가지고 재귀 호출
    printf("%d", n % 2);     // n을 2로 나눈 나머지를 출력 (2진수의 현재 자리)
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    //ㅁㅇ 
    if (num == 0) {
        printf("0");
    } else {
        decimalToBinary(num);
    }

    printf("\n");
    return 0;
}