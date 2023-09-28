#include <stdio.h>

int main()
{
    printf("------FIND FREQUENCY OF EACH NUMBERS-------\n");
    int n,i,j,count=0;

    printf("How many nos you want to enter : \n");
    scanf("%d", &n);

    int arr[n];
    int frq[n];

    printf("Enter %d numbers : \n",n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element%d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                frq[j] = 0;
            }
        }

        if(frq[i]!=0)
        {
            frq[i] = count;
        }
    }
    printf("\nThe frequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(frq[i]!=0)
        {
            printf("%d occurs %d times\n", arr[i], frq[i]);
        }
    }
}
