#include<stdio.h>
int main(){
	printf("------CHECK WHEATHER A NUMBER IS PALLINGDROME OR NOT-------\n");
	printf("Enter a number : ");
	int n, rev=0, rem=0, temp;
	scanf("%d", &n);
	temp=n;
	while(n>0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(rev==temp){
			printf("The number %d is a pallingdrome  ",rev);
	}
	else{
		printf("The number %d is not a pallingdrome  ",rev);
	}
	return 1;
}
