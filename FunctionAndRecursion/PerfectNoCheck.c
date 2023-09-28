#include <stdio.h>
#include <math.h>

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
int main()
{
    printf("------PERFECT NO CHECK-------\n");
    int n;
    printf("Entera a number : ");
    scanf("%d", &n);

    if (perfectNoCheck(n))
        printf("%d is a perfect number", n);
    else
        printf("%d is not a perfect number", n);

    return 1;
}
