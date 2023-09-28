#include <stdio.h>
#include <math.h>
int main()
{
    printf("------SWAP FIRST AND LAST DIGIT-------\n");
    printf("Enter a number : ");
    int n;
    scanf("%d", &n);

    int firstDigit,lastDigit;
    lastDigit=n%10;

    int temp=n;
    while(n>=10){
        n=n/10;
    }
    firstDigit=n;

    int digits=log10(temp);
    int rem=temp%(int)(pow(10,digits));
    n=rem-lastDigit;
    temp=lastDigit*pow(10,digits)+n+firstDigit;
    printf("%d",temp);

    return 1;
}
