#include <stdio.h>

int isAutomorphic(int num) {
    int square = num * num;
    int temp = num;
    int count = 0;
    while (temp > 0) {
        count++;
        temp /= 10;
    }

    int suffix = square % (int)pow(10, count);

    if (suffix == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isAutomorphic(num)) {
        printf("%d is an automorphic number.\n", num);
    } else {
        printf("%d is not an automorphic number.\n", num);
    }

    return 0;
}
