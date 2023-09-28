#include<stdio.h>
// DEMO

int strLength(char ch[]){
    int i=0;
    for(i=0; ch[i]!='\0'; i++){
        if(ch[i]==" "){
        return i;
    }
    }
    
}
int main(){
	printf("------LENGTH OF A STRING-------\n");
	
    char ch[100];
    printf("Enter a string : ");
    scanf("%s",ch);

    printf("%s\n",ch);
    printf("Length of the string is %d",strLength(ch));
	return 1;
}
