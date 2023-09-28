#include <stdio.h>
#include <math.h>

int octalToDecimal(int n)
{
    int rem, decNo = 0, p = 0;
    while (n > 0)
    {
        rem = n % 10;
        decNo += rem * pow(8, p);
        p++;
        n = n / 10;
    }
    return decNo;
}

void octalToHexadecimal(int n)
{
    n = octalToDecimal(n);
    int p = 0, rem, hexadecimal = 0;
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
    printf("Corresponding Hexadecimal No is : ");
    for (p = p - 1; p >= 0; p--)
    {
        printf("%c", hexaArr[p]);
    }
}

int main()
{
    printf("------CONVERT OCTAL TO HEXADECIMAL-------\n");
    int n;
    printf("Enter an octal number : ");
    scanf("%d", &n);

    octalToHexadecimal(n);

    return 1;
}
