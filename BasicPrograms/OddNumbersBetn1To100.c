#include <stdio.h>
int main()
{
    int n, i;
    printf("Odd Numbers Between 1 to 100  \n");
    n = 100;

    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d  ", i);
        }
    }
    return 1;
}