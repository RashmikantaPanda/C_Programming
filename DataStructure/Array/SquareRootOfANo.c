#include <stdio.h>

float findSquareRoot(int n)
{
    float l=0, h=n/2,m;
    while(h-1>0.000001f){
        m=(l+h)/2.0f;
        if(m*m>n)
            h=m;
        else
         l=m;
    }
    return m;
}

int main()
{
    printf("---------SQUARE ROOT OF A NUMBER--------\n");
    int no = 5;

    printf("Square root od %d is %f ", no, findSquareRoot(no));

    return 1;
}