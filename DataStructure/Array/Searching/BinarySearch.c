#include <stdio.h>

int binarySearch(int arr[], int size, int key)
{
    int start=0,end=size-1,mid;
    while (start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key)
            return mid;
        if(arr[mid]<key)
            start=mid+1;
        else
            end=mid-1;
    }
    return -1;
}

int main()
{
    printf("---------BINARY SEARCH--------\n");
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    int flag = binarySearch(arr, size, key);
    if (flag >= 0)
        printf("%d is present at index %d ", key, flag);
    else
        printf("%d is not present in the array", key);

    return 1;
}