#include<stdio.h>
int main(){
    int n, i;
    printf("How many numbers you want to print ? \n");
    scanf("%d",&n);
    printf("\n %d natural numbers are \n",n);
    for(i=1; i<=n; i++){
        printf("%d  ",i);
    }
    return 1;
}