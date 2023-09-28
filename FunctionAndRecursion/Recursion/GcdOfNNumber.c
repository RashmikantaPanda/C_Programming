#include <stdio.h>

int gcdOfTwoNos(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcdOfTwoNos(b, a % b);
    }
}

int gcdOfNNumbers(int arr[], int n){
    int result=arr[0];
    int i;
    for(i=1; i<n; i++){
        result=gcdOfTwoNos(result,arr[i]);
        printf("%d",result);
    }
    return result;
}

int main()
{
    int n;
    int arr[]={16,8};
    int size=sizeof(arr)/sizeof(arr[0]);

    printf("GCD is : %d",gcdOfNNumbers(arr,size));
}