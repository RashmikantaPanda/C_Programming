#include<stdio.h>
// DEMO

int main(){
	printf("------FIND MAX AND MIN USING POINTER-------\n");
	
    int arr[10],*p,i,max,min;
    p=arr;
    for(i=0; i<10; i++){
        printf("Enter element%d : ",i+1);
        // scanf("%d",&arr[i]);
        scanf("%d",p+i);
    }
    min=max=*p; //arr[0];
    for ( i = 0; i < 10; i++)
    {
        if(*(p+i)>max)
            max=*(p+i);
        else if (*(p+i)<min)
            min=*(p+i);
    }
    printf("MAX : %d , MIN : %d",max,min);
    
	
	return 1;
}
