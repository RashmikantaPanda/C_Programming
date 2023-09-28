#include<stdio.h>

long int factoralOfANumber(int n){
    
    if(n==1 || n==0){
        return 1;
    }
    else{
        return (n*factoralOfANumber(n-1));
    }
    
}
int main(){
	printf("------FACTORIAL OF A NUMBER-------\n");
	int n;
	printf("Enter a number : ");
	scanf("%d", &n);

    printf("Factor of %d is : %ld",n,factoralOfANumber(n));

	return 1;
}
