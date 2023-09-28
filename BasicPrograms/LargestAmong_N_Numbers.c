#include <stdio.h>
int main()
{
    int n, i;
    printf("How many numbers you want to enter ? \n");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i <n; i++)
    {
        printf("Enter number%d : ", i);
        scanf("%d", &arr[i]);
    }

    for(i=1; i<n; i++){
        if(arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }

    printf("Greatest numbers is : %d ", arr[0]);


    return 1;
}