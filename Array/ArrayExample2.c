#include <stdio.h>
// DEMO

int main()
{
    printf("------DEMO PROGRAM2-------\n");

    int arr[5], i = 0;
   
    while (i < 5)
    {
        arr[i] = ++i;
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 1;
}
