#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int hexaToDecimal(char *hexa)
{
    int decimalNo = 0;
    int size = strlen(hexa);
    int i;
    for (i = 0; i < size; i++)
    {
        char digit = hexa[size - 1 - i];
        if (digit >= '0' && digit <= '9')
        {
            decimalNo = decimalNo + (digit - '0') * pow(16, i);
        }
        else
        {
            decimalNo = decimalNo + (digit - 'A' + 10) * pow(16, i);
        }
    }

    return decimalNo;
}
int decimalToBinary(int n)
{
    int p = 0, rem, binary = 0;
    while (n > 0)
    {
        rem = n % 2;
        binary += rem * pow(10, p);
        p++;
        n = n / 2;
    }
    return binary;
}
int hexaToBinary(char *hexa)
{
    int n = hexaToDecimal(hexa);
    return decimalToBinary(n);
}
int main()
{
    printf("--------HEXADECIMAL TO DECIMAL");
    char *hexa;
    printf("\nEnter a Hexadecimal No : ");
    scanf("%s", hexa);

    printf("Hexadecimal : %s \nOctal : %d", hexa, hexaToOctal(hexa));

    return 1;
}