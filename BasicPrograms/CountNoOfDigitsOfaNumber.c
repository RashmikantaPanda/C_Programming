#include <stdio.h>
int main()
{
    int n, rem=0, count=0;
    printf("----------- No of Digits of a Number --------  \n");
    printf("Enter a number : \n");
    scanf("%d",&n);
    while(n>0){
        n=n/10;
        count++;
    }
    printf("No of digits is : %d",count);
    return 1;
}