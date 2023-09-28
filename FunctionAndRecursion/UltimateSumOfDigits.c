#include<stdio.h>
#include<math.h>

int ultimateSumOfDigits(int n){
	int sum=0,rem;
	do{
		rem=0;
		sum=0;
		while(n>0){
			rem=n%10;
			sum=sum+rem;
			n=n/10;	
		}
		n=sum;
	}
	while(sum>10);
	return sum;
}
int main(){
//	Ultimate Sum of Digits of a number
	printf("------SUM OF DIGITS OF A NUMBER UPTO SINGLE DIGIT-------\n");
	int n,base;
	printf("Enter a number : ");
	scanf("%d", &n);

	printf("Ultimate sum of %d is %d",n,ultimateSumOfDigits(n));
	return 1;
}
