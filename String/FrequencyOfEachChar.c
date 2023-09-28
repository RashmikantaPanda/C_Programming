#include <stdio.h>
// all are small case characters
int *freqOfEachCharacter(char st[])
{
    int size = sizeof(st) / sizeof(st[0]);

    int i;
    static int arr[26] = {0};
    for (i = 0; i < size; i++)
    {
        if (st[i] != ' ')
            arr[st[i]-97]++;
    }
    // for (int i = 0; i < 26; i++)
    // {   
    //     if(arr[i]!=0)
    //     printf("Frequency of %c is  : %d\n", i+97, arr[i]);
    // }

    return arr;
}

int main()
{
    printf("------FREQUENCY OF EACH CHARACTER-------\n");

    char ch[] = "bcabcabc";
    printf("%s\n", ch);

    int* arr;
    arr = freqOfEachCharacter(ch);
    for (int i = 0; i < 26; i++)
    {   
        if(*(arr+i)!=0)
        printf("Frequency of %c is  : %d\n", i+97, *(arr+i));
    }

   

    return 1;
}
