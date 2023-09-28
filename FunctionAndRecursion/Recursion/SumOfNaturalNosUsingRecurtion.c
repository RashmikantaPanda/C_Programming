#include<stdio.h>
#include<math.h>

int sumOfNaturalNos(int n){
	if(n==0){
		return 0;
	}
	else{
		return (n+sumOfNaturalNos(n-1));
	}
}
int main(){
	printf("------SUM OF NATURAL NUMBERS UPTO N-------\n");
	int n,base;
	printf("Enter a number : ");
	scanf("%d", &n);

	printf("Sum of all natuaral numbers upto %d is %d",n,sumOfNaturalNos(n));
	
	return 1;
}
