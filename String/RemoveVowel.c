#include<stdio.h>
// DEMO
char * removeVowel(char st[]){
    int i=0,j=0;
    while(st[i]){
        if(st[i]!='A'&&st[i]!='E'&&st[i]!='I'&&st[i]!='O'&&st[i]!='U'){
            st[j]=st[i];
            j++;
        }
        i++;
    }
    st[j]='\0';
    return (st);
}
int main(){
	printf("------REMOVE VOWEL FROM STRING-------\n");
	
    char ch[]="RASHMIKANTA";
    printf("%s\n",ch);
    printf("\nAfter removing vowels : %s",removeVowel(ch));

	return 1;
}
