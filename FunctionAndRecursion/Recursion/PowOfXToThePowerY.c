#include <stdio.h>

long int powOfXToThePowY(int a, int b)
{
    if (b != 0)
    {
        return (a*powOfXToThePowY(a,b-1));
    }
    else{
        return 1;
    }
}
int main()
{
    printf("------POWER OF X TO THE POWER Y ,USING RECURSION-------\n");
    int x, y;
    printf("Enter the  number(x): ");
    scanf("%d", &x);

    printf("Enter the power(y) : ");
    scanf("%d", &y);

    printf("%d POW %d is : %ld", x, y, powOfXToThePowY(x, y));

    return 1;
}
