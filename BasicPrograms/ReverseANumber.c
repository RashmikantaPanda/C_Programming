#include<stdio.h>
int main(){
	printf("------REVERSE A NUMBER-------\n");
	printf("Enter a number : ");
	int n, rev=0, rem=0;
	scanf("%d", &n);
	
	while(n>0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("The number is %d ",rev);
	return 1;
}
