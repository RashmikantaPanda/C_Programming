#include<stdio.h>
#include<math.h>
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
	printf("-----PATTERN PROGRM3------\n");
	int i,j,n,data=1;
	for(i=-5; i<=5; i++){
		for(j=1; j<=abs(i); j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	return 1;
}
