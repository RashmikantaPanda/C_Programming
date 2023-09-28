#include <stdio.h>

// Perfect Number Check

int perfectNoCheck(int n)
{
    int sum = 0, temp = n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }
    if (temp == sum)
        return 1;
    else
        return 0;
}

void perfectNoBetnRange(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (perfectNoCheck(i))
            printf("%d, ", i);
    }
}
int main()
{
    printf("------PERFECT NO CHECK-------\n");
    int n;
    printf("Entera a number : ");
    scanf("%d", &n);

    printf("Perfect numbers between 1 to %d are : ",n);
    perfectNoBetnRange(n);
    return 1;
}
