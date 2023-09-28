#include<stdio.h>
int main(){
	
	/*
		1 2 3 4 5
		1 2 3 4
		1 2 3
		1 2
		1
		1
		1 2
		1 2 3
		1 2 3 4
		1 2 3 4 5
	*/
	printf("-----PATTERN PROGRM4------\n");
	int i,j,n,data=1;
	for(i=-5; i<=5; i++){
		for(j=1; j<=abs(i); j++){
			printf("%d ",j);
		}
		if(i!=0){
			printf("\n");

		}
	}
	return 1;
}
