#include <stdio.h>

// Without using recursion
int lcmOfTwoNos(int a, int b)
{
    int max = (a > b) ? a : b;
    int min = (a < b) ? a : b;

    int i = max, flag = 1;
    while (flag)
    {
        if (i % min == 0 && i % max == 0)
        {
            flag = 0;
            return i;
        }
        i++;
    }

    return a;
}

// Using recursion
int lcmOfTwoNosUsingRecursion(int a, int b)
{
    static int i = 1;

    if (i % a == 0 && i % b == 0)
    {
        return i;
    }
    else
    {
        i++;
        lcmOfTwoNosUsingRecursion(a,b);
        return i;
    }

}

int main()
{
    printf("------GCD OF TWO NUMBERS-------\n");
    int n1, n2;
    printf("Enter the first number : ");
    scanf("%d", &n1);

    printf("Enter the second number : ");
    scanf("%d", &n2);

    printf("LCM of %d and %d is : %d", n1, n2, lcmOfTwoNosUsingRecursion(n1, n2));

    return 1;
}

