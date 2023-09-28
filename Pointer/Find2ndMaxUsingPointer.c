#include <stdio.h>
// DEMO

int main()
{
    printf("------FIND 2ND MAX USING POINTER-------\n");

    int arr[10], *p, i, max, secondMax = 0;
    p = arr;
    for (i = 0; i < 10; i++)
    {
        printf("Enter element%d : ", i + 1);
        // scanf("%d",&arr[i]);
        scanf("%d", p + i);
    }
     max = *p; // arr[0];
    for (i = 0; i < 10; i++)
    {
        if (*(p + i) > max)
        {
            secondMax = max;
            max = *(p + i);
        }
    }
    printf("Second MAX : %d",secondMax);

    return 1;
}
