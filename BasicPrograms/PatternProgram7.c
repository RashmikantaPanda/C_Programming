#include<stdio.h>
int main(){
	
	/*
	
		 x       x
		   x   x
		     x
		   x   x
		 x       x


	*/
	printf("-----PATTERN PROGRM7------\n");
	int i,j;
	int n=2;
	for(i=-n; i<=n; i++){
		for(j=-n; j<=n; j++){
			if(abs(i)==abs(j)){
				printf(" x ");
			}
			else{
				printf("   ");

			}
		}
		printf("\n");
	}
	return 1;
}
