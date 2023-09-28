#include <stdio.h>
#include <math.h>

int armstrongNoCheck(int n)
{
    int digits = log10(n) + 1;
    int sum = 0, rem, temp = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + pow(rem, digits);
        n = n / 10;
    }
    if (temp == sum)
        return 1;
    else
        return 0;
}

void armstrongNoBetnRange(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        if (armstrongNoCheck(i))
            printf("%d, ", i);
    }
}
int main()
{
    printf("------ARMSTRONG NO BETWEEN 1 TO RANGE-------\n");
    int n;
    printf("Enter the Range : ");
    scanf("%d", &n);

    printf("Armstrong nos between 1 to %d are : ",n);
    armstrongNoBetnRange(n);

    return 1;
}
