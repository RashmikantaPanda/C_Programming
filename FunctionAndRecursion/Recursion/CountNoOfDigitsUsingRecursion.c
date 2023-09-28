#include <stdio.h>
#include <math.h>

int countDigits(int n)
{
    static int count = 0;
    if (n > 0)
    {
        count = count + 1;
        return countDigits(n / 10);
    }
    else
        return count;
}

int main()
{
    printf("------COUNT NO OF DIGIS IN OF A NUMBER-------\n");
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Number of digits of %d is %d\n", n, countDigits(n));

    return 1;
}
