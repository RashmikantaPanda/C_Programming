#include <stdio.h>

int main()
{
    printf("------ABUDANT NO CHECK-------\n");
    int num, sumOfDivisors = 0;
    printf("Enter a number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sumOfDivisors += i;
        }
    }

    if (sumOfDivisors > num)
    {
        printf("%d is an abundant number", num);
    }
    else
    {
        printf("%d is not an abundant number", num);
    }

    return 0;
}
