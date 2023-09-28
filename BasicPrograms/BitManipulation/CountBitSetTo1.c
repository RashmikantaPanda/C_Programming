#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int countBitSetToOne(int n){
    int count=0;
    // for(int i=0; i<8; i++){
    //     if(n&(1<<i))
    //         count++;
    // }
    while (n)
    {
        n=n&(n-1);
        count++;
    }
    
    return count;
}

int main()
{
    printf("--------COUNT BIT SET TO ONE---------\n");
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("No of bit set to 1 is : %d",countBitSetToOne(n));
    
   

    return 1;
}