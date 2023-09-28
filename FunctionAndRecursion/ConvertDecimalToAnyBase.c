#include<stdio.h>
#include<math.h>

int convertDecimalToBinaryOrOctal(int n, int base){
	int result=0,p=0,rem;
		while(n>0){
		rem=n%base;
		result+=rem*pow(10,p);
		p++;
		n=n/base;
	}
	return result;
}
int main(){
	printf("------CONVERT DECIMAL TO OCTAL OR BINARY-------\n");
	int n,base;
	printf("Enter a number : ");
	scanf("%d", &n);
	
	
	printf("Enter the base : ");
	scanf("%d", &base);
	

	printf("The Decinal No %d of base %d is %d",n,base,convertDecimalToBinaryOrOctal(n,base));
	return 1;
}
