#include<stdio.h>
// DEMO

void updateValue(int *p){
    *p=*p+1; 
}
int main(){
	printf("------POINTER EXAMPLE 3-------\n");

    int k=10;
    updateValue(&k);

    printf("%d",k);
	
    
    
	
	return 1;
}
