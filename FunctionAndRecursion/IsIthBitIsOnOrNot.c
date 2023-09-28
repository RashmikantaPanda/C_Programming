#include <stdio.h>
#include <math.h>

int isIthValueIsOnOrNot(int n, int i)
{
    if ((n & (1 << i))){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    printf("------IS Ith BIT IS ON OR NOT-------\n");
    int n,i;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Enter the index : ");
    scanf("%d", &i);

    int flag = isIthValueIsOnOrNot(n,i);

    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 1;
}
