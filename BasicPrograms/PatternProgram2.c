#include<stdio.h>
int main(){
	
	/*		    1
		      1 2
		    1 2 3
		  1 2 3 4
		1 2 3 4 5
	*/
	printf("-----PATTERN PROGRM2------\n");
	int i,j,n=5,data=1;
	for(i=1; i<=n; i++)
	{
		for(j=n-i; j>0; j--)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			
			printf("%d ",j);
		}
		printf("\n");
	}
		
	return (1);
}
