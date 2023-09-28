#include <stdio.h>
#include <math.h>
// Prime number between 1 to a given range(using function)
int primeNoCheck(int n)
{

    int flag = 0, i = 2;
    while (i <= sqrt(n))
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
        i++;
    }
    if ((flag == 0) && (n > 1))
        return 1;
    else
        return 0;
}

void primeNoBetnRange(int range){
    int i=0;
    for(i=0; i<=range; i++){
        if(primeNoCheck(i))
            printf("%d, ",i);
    }
}
int main()
{
    printf("------PRIME NO CHECK BETWEEN 1 TO RANGE-------\n");
    int range;
    printf("Entera the range : ");
    scanf("%d", &range);

    printf("Prime no between 1 to %d are : ",range);

    primeNoBetnRange(range);


    return 1;
}
