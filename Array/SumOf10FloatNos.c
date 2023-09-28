#include<stdio.h>
// DEMO

int main(){
	printf("------READ 10 NUMBERS AND PRINT IT-------\n");
	int n=10,i;
    float arr[n],sum=0;

	printf("Enter 10 numbers : \n");
    for(i=0; i<10; i++){
        printf("Enter element%d : ",i+1);
        scanf("%f",&arr[i]);
    }

    for(i=0; i<10; i++){
        sum+=arr[i];
    }
    
    printf("Sum is : %f",sum);


	return 1;
}
