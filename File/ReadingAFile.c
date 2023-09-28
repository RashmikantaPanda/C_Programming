#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("---------READING A FILE----------\n");

    FILE *ptr;
    ptr = fopen("Abc.txt", "r");
    if (ptr != NULL)
    {
        int a;
        while ((a = fgetc(ptr)) != EOF)
        {
            printf("%c", a);
        }
    }
    fclose(ptr);
}
