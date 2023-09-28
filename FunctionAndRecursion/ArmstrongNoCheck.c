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
int main()
{
    printf("------ARMSTRONG NO CHECK-------\n");
    int n;
    printf("Entera a number : ");
    scanf("%d", &n);

    if (armstrongNoCheck(n))
        printf("%d is an armstrong number", n);
    else
        printf("%d is not an armstrong number", n);
        
    return 1;
}
