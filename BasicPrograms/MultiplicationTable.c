#include <stdio.h>
int main()
{
    int n, i,sum=0;
    printf("----------- Multiplicaton Table --------  \n");
    printf("Enter the table you want to show : \n");
    scanf("%d",&n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n",n,i,n*i);
    }
    return 1;
}