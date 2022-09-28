#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    c=(a>b)?a:b;
    printf("%d is greater number.",c);
    return 0;


}


