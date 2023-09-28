#include<stdio.h>
#include<math.h>

//Using Array
int checkSpecialNoUsingArray(int n){
	int digits=log10(n)+1;
	
	int i=1;
	int arr[digits];
	int rem,temp=n;
	while(temp>0){
		rem=temp%10;
		arr[i]=rem;
		temp=temp/10;
		i++;
	}
	int flag=1;
	for(i=1; i<=digits; i++){
		if(arr[i]%2!=(i%2)){
			flag=0;
		}
	
	}
	if(flag==0){
		return 0;
	}
	else{
		return 1;
	}
}

//Without using array
int checkSpecialNoWithoutUsingArray(int n){
	int rem,flag=1,index=1;
	while(n>0){
		rem=n%10;
		if(index%2!=rem%2){
			flag=0;
			break;
		}
		index++;
		n=n/10;
	}
	return flag;
}
int main(){
	printf("------WHEATHER A NUMBER IS SPECIAL OR NOT-------\n");
	int n;
	printf("Enter a number : ");
	scanf("%d", &n);
	
//	int flag=checkSpecialNoUsingArray(n);  //Using Array
	int flag=checkSpecialNoWithoutUsingArray(n); //Without using Array
	
	if(flag==1){
		printf("%d is a special number",n);
	}
	else{
		printf("%d is not a special number",n);
	}
	return 1;
}
