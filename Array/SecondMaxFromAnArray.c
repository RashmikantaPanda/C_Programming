#include <stdio.h>
// DEMO

int main()
{
    printf("------FIND SECOND MAX ELEMENT-------\n");
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

    max=min=arr[0];
    int sMax=0,sMin=0;
    for(i=1; i<n; i++){
        if(arr[i]>max){
            sMax=max;
            max=arr[i];
        }
        else if(arr[i]<min){
            sMin=min;
            min=arr[i];
        }
    }

    printf("MAX : %d ,   MIN : %d\n",max,min);
    printf("2nd MAX : %d ,   2nd MIN : %d",sMax,sMin);
    return 1;
}
