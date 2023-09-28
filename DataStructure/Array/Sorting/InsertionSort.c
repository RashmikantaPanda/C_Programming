#include <stdio.h>

int *insertionSort(int arr[], int size)
{
    int i, j, kv;
    for (i = 1; i < size; i++)
    {
        kv = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > kv; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = kv;
    }

    return arr;
}

int main()
{
    printf("---------INSERTION SORT--------\n");
    int arr[] = {6,4,9,7,2};

    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Before sorting array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", *(arr + i));
    }


    int *sortedArr = insertionSort(arr, size);

    printf("\nAfter sorting array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", *(sortedArr + i));
    }

    return 1;
}