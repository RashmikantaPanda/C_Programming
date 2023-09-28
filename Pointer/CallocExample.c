#include<stdio.h>
#include<stdlib.h>
// calloc



int main(){
	printf("------DYNAMIC MEMORY ALLOCATION (CALLOC)-------\n");
	
    int n,i,*p,sum=0;
    float avg;
    printf("How many element you want to insert ? \n");
    scanf("%d",&n);

    p=(int *)calloc(n,sizeof(int));

    for(i=0; i<n; i++){
        printf("Enter element%d : ",i+1);
        scanf("%d",p+i);

        sum=sum+ *(p+i);
    }
    avg=(float)sum/n;

    printf("SUM : %d and AVERAGE : %f",sum,avg);
	
	return 1;
}
