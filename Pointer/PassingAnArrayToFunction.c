#include <stdio.h>

//Using array as an argument

/*
int findMax(int arr[],int size){
    int max=arr[0];
    for(int j=1; j<size; j++){
        if(arr[j]>max)
            max=arr[j];
    }
    return max;
}
*/


// Using pointer as an argument
int findMax(int *p, int size)
{
    int max = *p;
    for (int j = 1; j < size; j++)
    {
        if (*(p + j) > max)
            max = *(p + j);
    }
    return max;
}
int main()
{
    printf("------PARSING AN ARRAY TO A FUNCTION-------\n");

    int arr[5], i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", arr + i);
    }

    int size = sizeof(arr) / sizeof(arr[0]);
    int max = findMax(arr, size);
    printf("MAX element is : %d", max);

    return 1;
}
