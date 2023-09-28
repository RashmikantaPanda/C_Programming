#include<stdio.h>
#include<math.h>
int main(){
	printf("------ASCII VALUE OF EACH CHARACTER-------\n");
	int i;
    for(i=0; i<256; i++)
    {
        printf("ASCII value of %c is %d\n",i,i);
    }
	return 1;
}
