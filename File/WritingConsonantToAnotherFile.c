#include <stdio.h>
#include <stdlib.h>

// Read from one file and write only consonant to another file

int main()
{
    //    printf("---------WRITING CONSONANT TO ANOTHER FILE----------");
    FILE *ptr1, *ptr2;
    int i, ch;
    ptr1 = fopen("Abc.txt", "r");
    ptr2 = fopen("Abc2.txt", "w");

    if (ptr1 != NULL)
    {
        int a;
        while ((a = fgetc(ptr1)) != EOF)
        {
            if (a == 'a' || a == 'A' || a == 'e' || a == 'E' || a == 'i' || a == 'I' || a == 'o' || a == 'O' || a == 'u' || a == 'U')
            {
                continue;
            }
            else
            {
                fputc(a, ptr2);
            }
        }
        printf("After writing consonant to 2nd file : \n");
    }
    else
    {
        printf("FILE is empty !");
    }
    fclose(ptr1);
    fclose(ptr2);

    ptr2 = fopen("Abc2.txt", "r");

    while ((ch = fgetc(ptr2)) != EOF)
    {
        printf("%c", ch);
    }
}
