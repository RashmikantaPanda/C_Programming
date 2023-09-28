#include <stdio.h>


int strongNoCheck(int n)
{
    int  rem, sum = 0, temp = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + factorial(rem);
        n = n / 10;
    }

    if (temp == sum)
        return 1;
    else
        return 0;
}

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main()
{
    printf("------PERFECT NO CHECK-------\n");
    int n;
    printf("Entera a number : ");
    scanf("%d", &n);

    if (strongNoCheck(n))
        printf("%d is a strong number", n);
    else
        printf("%d is not a strong number", n);

    return 1;
}
