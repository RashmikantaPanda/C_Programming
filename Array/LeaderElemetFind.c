#include <stdio.h>

void findLeaderEmelent(int arr[], int n){
     int  i,j;

    for(i=1; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i]<=arr[j])
                break;
        }
        if(j==n){
            printf("%d, ",arr[i]);
        }
        
    }
}

int main()
{
    printf("------FIND LEADER ELEMENT-------\n");
    int i;


    int arr[]={17,12,8,6,7,2};
    int size=sizeof(arr)/sizeof(arr[0]);

    printf("Given Array : ");
    for (i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
       
    }

    printf("\nLeader elements are : ");

    findLeaderEmelent(arr,size);
   
    return 1;
}
