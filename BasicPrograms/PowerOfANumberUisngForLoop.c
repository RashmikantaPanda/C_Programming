#include <stdio.h>
#include <math.h>
int main()
{
    printf("------POWER OF A NUMBER USING FORLOOP-------\n");
    printf("Enter a number : ");
    int n,exponent,i,power=1;
    scanf("%d", &n);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for (i = 1; i <= exponent; i++)
    {
        power = power * n;
    }

    printf("%d ^ %d = %d", n, exponent, power);
    return 1;
}
