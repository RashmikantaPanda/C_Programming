#include <stdio.h>
#include <math.h>

// Check Wheather a given no is prime or not
int primeNoCheck(int n)
{

    int flag = 0, i = 2;
    while (i <= sqrt(n))
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
        i++;
    }
    if ((flag == 0) && (n > 1))
        return 1;
    else
        return 0;
}
int main()
{
    printf("------PRIME NO CHECK-------\n");
    int n;
    printf("Entera a number : ");
    scanf("%d", &n);

    int checkPrime = primeNoCheck(n);
    if (checkPrime == 1)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }

    return 1;
}
