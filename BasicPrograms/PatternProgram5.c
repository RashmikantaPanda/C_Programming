#include<stdio.h>
int main(){
	
	/*
		1
		1 2
		1 2 3
		1 2 3 4
		1 2 3 4 5
		1 2 3 4 5 6
		1 2 3 4 5
		1 2 3 4
		1 2 3
		1 2
		1
	*/
	printf("-----PATTERN PROGRM5------\n");
	int i,j;
	for(i=-5; i<=5; i++){
		for(j=1; j<=5-abs(i)+1; j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	return 1;
}
