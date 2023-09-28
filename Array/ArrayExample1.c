#include<stdio.h>
// DEMO

int main(){
	printf("------DEMO PROGRAM1-------\n");

	// int arr[6]={1,2,3,4,5,6};
	// int size=sizeof(arr)/sizeof(arr[0]);
	// printf("%d \n",arr[5]);


	int a[5]={5,1,15,20,25};
	int i,j,m;
	i=++a[1];
	j=a[1]++;
	m=a[i++];
	printf("i= %d, j=%d, m=%d",i,j,m);
	
	return 1;
}
