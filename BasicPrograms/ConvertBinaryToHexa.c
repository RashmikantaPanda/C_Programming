#include <stdio.h>
#include <math.h>

int binaryToDecimal(int n)
{
    int rem, decNo = 0, p = 0;
    while (n > 0)
    {
        rem = n % 10;
        decNo += rem * pow(2, p);
        p++;
        n = n / 10;
    }
    return decNo;
}

void binaryToHexaDecimal(int n)
{
    n = binaryToDecimal(n);

    int p = 0, rem;
    char hexaArr[100];
    while (n > 0)
    {
        rem = n % 16;
        if (rem < 10)
            hexaArr[p] = rem + 48;
        else
            hexaArr[p] = rem + 55;
        p++;
        n = n / 16;
    }
    for (p = p - 1; p >= 0; p--)
    {
        printf("%c", hexaArr[p]);
    }
}
int main()
{
    printf("------CONVERT BINARY TO HEXADECIMAL-------\n");
    int n;
    printf("Enter a binary number : ");
    scanf("%d", &n);

    printf("Corresponding Decimal number is : ");
    binaryToHexaDecimal(n);

    return 1;
}
