#include <stdio.h>
int main()
{
    int n, i,sum=0;
    printf("Sum of all ODD Numbers Between 1 to N  \n");
    printf("Enter the range : ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum+=i;   
        }
    }
    printf("SUM is : %d",sum);
    return 1;
}