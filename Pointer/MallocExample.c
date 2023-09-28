#include<stdio.h>
#include<stdlib.h>

// malloc

//Input n nos and find the sum and average of n numbers using dynamic memory allocation

int main(){
	printf("------DYNAMIC MEMORY ALLOCATION (MALLOC) -------\n");
	
    int n,i,*p,sum=0;
    float avg;
    printf("How many element you want to insert ? \n");
    scanf("%d",&n);

    p=(int *)malloc(n*sizeof(int));

    for(i=0; i<n; i++){
        printf("Enter element%d : ",i+1);
        scanf("%d",p+i);

        sum=sum+ *(p+1);
    }
    avg=(float)sum/n;

    printf("SUM : %d and AVERAGE : %f",sum,avg);
	
	return 1;
}
