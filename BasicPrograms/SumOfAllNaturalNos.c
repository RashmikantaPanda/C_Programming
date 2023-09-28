#include <stdio.h>
int main()
{
    int n, i, sum=0;
    printf("------- SUM OF N NATURAL NUMBERS -------");
    printf("\nHow many numbers you want to enter ? \n");
    scanf("%d", &n);
    int arr[n];
    for (i = 1; i <=n; i++)
    {
        sum+=i;
    }

    printf("\nSum of n natural number is : %d ",sum);




    return 1;
}