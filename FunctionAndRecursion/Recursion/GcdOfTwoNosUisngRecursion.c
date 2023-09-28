#include<stdio.h>

int gcdOfTwoNosUsingRecursion(int n1, int n2) {
    if (n2 != 0)
        return gcdOfTwoNosUsingRecursion(n2, n1 % n2);
    else
        return n1;
}
int main(){
	printf("------GCD OF TWO NUMBERS USING RECURSION-------\n");
	int n1,n2;
	printf("Enter the first number : ");
	scanf("%d", &n1);
	
	printf("Enter the second number : ");
	scanf("%d", &n2);

    printf("GCD of %d and %d is : %d",n1,n2,gcdOfTwoNosUsingRecursion(n1,n2));

	return 1;
}
