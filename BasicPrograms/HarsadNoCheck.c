#include <stdio.h>

int main() {
    printf("------HARSAD NO CHECK--------\n");
    int num, temp, sum = 0, digit;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    temp = num;

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    if (temp % sum == 0) {
        printf("%d is a Harshad number.\n", temp);
    } else {
        printf("%d is not a Harshad number.\n", temp);
    }

    return 0;
}
