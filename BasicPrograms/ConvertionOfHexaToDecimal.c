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
int main()
{
    printf("--------HEXADECIMAL TO DECIMAL");
    char *hexa;
    printf("Enter a Hexadecimal No : ");
    scanf("%s", hexa);

    printf("Hexadecimal : %s \nDecimal : %d", hexa, hexaToDecimal(hexa));

    return 1;
}