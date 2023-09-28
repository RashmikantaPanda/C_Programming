#include<stdio.h>
#include<math.h>
int main(){
	
	/*
		5 5 5 5 5 5 5 5 5
		5 4 4 4 4 4 4 4 5
		5 4 3 3 3 3 3 4 5
		5 4 3 2 2 2 3 4 5
		5 4 3 2 1 2 3 4 5
		5 4 3 2 2 2 3 4 5
		5 4 3 3 3 3 3 4 5
		5 4 4 4 4 4 4 4 5
		5 5 5 5 5 5 5 5 5

	*/
	printf("-----PATTERN PROGRM6------\n");
	int i,j;
	int n=4;
	for(i=-n; i<=n; i++){
		for(j=-n; j<=n; j++){
			if(abs(i)>abs(j)){
				printf("%d ",abs(i)+1);
			}
			else{
				printf("%d ",abs(j)+1);

			}
		}
		printf("\n");
	}
	return 1;
}
