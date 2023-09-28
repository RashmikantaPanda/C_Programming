#include<stdio.h>
#include<math.h>
int main(){
	printf("------CONVERT DECIMAL TO BINARY-------\n");
	int n,p=0,rem,binary=0;
	printf("Enter a number : ");
	scanf("%d", &n);
	
	while(n>0){
		rem=n%2;
		binary+=rem*pow(10,p);
		p++;
		n=n/2;
	}
	printf("The number is %d ",binary);
	return 1;
}
