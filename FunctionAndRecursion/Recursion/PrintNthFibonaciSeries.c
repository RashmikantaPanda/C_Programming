#include<stdio.h>
#include<math.h>
int NthFibonacci(int n){
    if(n==0 )
        return 0;
    if(n==1)
        return 1;
    else{
        return (NthFibonacci(n-1)+NthFibonacci(n-2));
    }
    
}
int main(){
	printf("------N-TH FIBONACI SERIES-------\n");
	int n;
	printf("Enter a number : ");
	scanf("%d", &n);
	
    printf("Fibonaci series of  %d is \n",n);
    // int i;
    // for(i=0; i<n; i++){
    //     printf("%d ",NthFibonacci(i));
    // }
    printf("%d ",NthFibonacci(n));
	return 1;
}


