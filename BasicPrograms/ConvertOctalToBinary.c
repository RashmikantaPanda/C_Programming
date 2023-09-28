#include <stdio.h>
#include <math.h>

int octalToDecimal(int n){
    int rem, decNo=0,p=0;
    while(n>0){
        rem=n%10;
        decNo+=rem*pow(8,p);
        p++;
        n=n/10;
    }
    printf("%d",decNo);
    return decNo;
}


int  octalToBinary(int n){
    n=octalToDecimal(n);
    int rem, p = 0;
    int  binNo=0;
    while(n>0){
		rem=n%2;
		binNo+=rem*pow(10,p);
		p++;
		n=n/2;
	}
    return binNo;
}


int main()
{
    printf("------CONVERT OCTAL TO BINARY-------\n");
    int n;
    printf("Enter an octal number : ");
    scanf("%d", &n);

    printf("Corresponding Binary number is : %d",octalToBinary(n));
    
    return 1;
}
