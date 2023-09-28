#include <stdio.h>
#include <math.h>

int isTwosPower(int n)
{
    return (!(n & (n - 1)));
}

int main()
{
    printf("------IS TWO'S POWER OR NOT-------\n");
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int flag = isTwosPower(n);

    if(flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 1;
}
