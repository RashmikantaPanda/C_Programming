#include <stdio.h>

int* bubbleSort(int arr[], int size)
{
    int i,j,temp=0;
    for(i=0; i<size-1; i++){
        for(j=i+1; j<size; j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    return arr;
}

int main()
{
    printf("---------BUBBLE SORT--------\n");
    int arr[] = {2, 5, 3, 6, 1, 8, 7, 9, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *sortedArr= bubbleSort(arr, size);

    for(int i=0; i<size; i++){
        printf("%d, ",*(sortedArr)+i);
    }
    
    return 1;
}