#include<stdio.h>

int linearSearch(int arr[], int size, int key)
{
    int flag = -1, i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            flag = i;
            break;
        }
    }
    return flag;
}

int main()
{
    printf("---------LINEAR SEARCH--------\n");
    int arr[] = {2, 5, 3, 6, 1, 8, 7, 9, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    int flag = linearSearch(arr, size, key);
    if (flag >= 0)
        printf("%d is present at index %d ", key, flag);
    else
        printf("%d is not present in the array", key);

    return 1;
}