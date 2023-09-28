#include <stdio.h>
#include <stdlib.h>

int main()
{
    //    printf("---------CONVERTING UPPER CASE AND WRITING TO ANOTHER FILE----------");
    FILE *ptr1, *ptr2;
    int  i;
    ptr1 = fopen("Abc.txt", "r");
    ptr2 = fopen("Abc2.txt", "w");

    if (ptr1 != NULL)
    {
        int a;
        while ((a = fgetc(ptr1)) != EOF)
        {
            // printf("%c", a);
            if (a > 96 && a<123)
                a = a - 32;
            fputc(a, ptr2);
        }
        printf("Successfully converted to upper case and stored in another file");
    }
    else
    {
        printf("FILE is empty !");
    }
    fclose(ptr1);
    fclose(ptr2);
}
