#include <stdio.h>
#include <math.h>

int binaryToDecimal(int n){
    int rem,decNo=0,p=0;
    while(n>0){
        rem=n%10;
        decNo+=rem*pow(2,p);
        p++;
        n=n/10;
    }
    return decNo;
}

int binaryToOctal(int n){
    n=binaryToDecimal(n);
    int rem,octNo=0,p=0;
    while(n>0){
        rem=n%8;
        octNo+=rem*pow(10,p);
        p++;
        n=n/8;
    }
    return octNo;
}

int main()
{
	printf("------CONVERT BINARY TO OCTAL-------\n");
	int n;
	printf("Enter a binary number : ");
	scanf("%d", &n);

    printf("Corresponding Octal number is : %d",binaryToOctal(n));
	
	return 1;
}
