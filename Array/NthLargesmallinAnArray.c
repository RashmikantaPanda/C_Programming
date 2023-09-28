#include <stdio.h>

int main()
{
    int n, i, j, temp;

    printf("enter size of an array :");
    scanf("%d", &n);
    printf("enter all the elements :");
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\narray is :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\n sorted array is :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    int k;
    printf("\nenter k to find smallest and largest number in an array :");
    scanf("%d", &k);
    int count = 1;
    for (i = 0; i < n; i++)
    {
        if (a[i] != a[i + 1])
        {
            count++;
        }
        if (count == k)
        {
            printf("%dth smallest number is %d ", k, a[i + 1]);
            break;
        }
    }
    count = 1;

    for (i = n - 1; i > 0; i--)
    {
        if (a[i] != a[i - 1])
        {
            count++;
        }
        if (count == k)
        {
            printf("\n%dth greatest number is %d ", k, a[i - 1]);
            break;
        }
    }
}