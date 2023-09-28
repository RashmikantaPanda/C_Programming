#include <stdio.h>
void merge(int arr[], int first, int mid, int last)
{
    int temp[100];
    int i, j, k;
    i = first;
    j = mid + 1;
    k = 0;
    while (i <= mid && j <= last)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= last)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (i = first, j = 0; i <= last; i++, j++)
    {
        arr[i] = temp[j];
    }
}

void mergeSort(int arr[], int first, int last)
{
    int mid;
    if (first < last)
    {
        mid = (first + last) / 2;
        mergeSort(arr, first, mid);
        mergeSort(arr, mid + 1, last);
        merge(arr, first, mid, last);
    }
}

int main()
{
    printf("---------MERGE SORT--------\n");
    int arr[] = {2, 5, 3, 6, 1, 8, 7, 9, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Before sorting : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }

    printf("\nAfter sorting : ");
    mergeSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 1;
}