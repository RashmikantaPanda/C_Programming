#include<stdio.h>
int main(){
    int n, i;
    printf("Natural Number in Reverse Order");
    printf("How many numbers you want to print ? \n");
    scanf("%d",&n);
    printf("%d natural numbers are \n",n);
    for(i=n; i>=1; i--){
        printf("%d  ",i);
    }
    return 1;
}