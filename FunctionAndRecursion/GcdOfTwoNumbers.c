#include<stdio.h>

int gcdOfTwoNos(int a, int b){
    int temp;
    while (b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }

    return a;
    
}
int main(){
	printf("------GCD OF TWO NUMBERS-------\n");
	int n1,n2;
	printf("Enter the first number : ");
	scanf("%d", &n1);
	
	printf("Enter the second number : ");
	scanf("%d", &n2);

    printf("GCD of %d and %d is : %d",n1,n2,gcdOfTwoNos(n1,n2));

	return 1;
}
