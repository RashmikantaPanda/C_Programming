#include <stdio.h>
#include <math.h>

// Print all prime factors of a given number

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

void primeFactorsOfANo(int n){
    int i=1;
    for(i=1; i<=n; i++){
        if(n%i==0){
            if(primeNoCheck(i))
                printf("%d, ",i);
        }
    }
}
int main()
{
    printf("------PRIME FACTORIAL OF A NO -------\n");
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    printf("Prime factors of %d are : \n",n);
    primeFactorsOfANo(n);

    
    return 1;
}
