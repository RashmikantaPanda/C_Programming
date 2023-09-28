#include<stdio.h>
// DEMO

int *foo(){
    int k=10;
    k++;
    return (&k);
}
int main(){
	printf("------DEMO PROGRAM2-------\n");
	
    int *r;
    r=foo();
    printf("%d",*r);
	
	return 1;
}
