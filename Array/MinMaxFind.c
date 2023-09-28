#include <stdio.h>
// DEMO

int main()
{
    printf("------FIND MIN AND MAX ELEMENT-------\n");
    int n, i;

    printf("How many nos you want to enter : \n");
    scanf("%d", &n);

    int arr[n],max,min;

    printf("Enter %d numbers : \n",n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element%d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    max=arr[0];
    min=max;
    for(i=1; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }
    }

    printf("MAX : %d ,   MIN : %d",max,min);
    return 1;
}
