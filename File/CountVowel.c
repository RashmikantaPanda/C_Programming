#include <stdio.h>
#include <stdlib.h>

int main()
{
    //    printf("---------COUNT VOWEL FROM A FILE----------");
    FILE *ptr1;
    int  i,count=0;
    ptr1 = fopen("Abc.txt", "r");
    if (ptr1 != NULL)
    {
        int a;
        while ((a = fgetc(ptr1)) != EOF)
        {
            printf("%c", a);
            if (a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U'){
                count++;
            }
              
        }
        printf("\n\nVOWEL Count : %d",count);
    }
    else
    {
        printf("FILE is empty !");
    }
    fclose(ptr1);
}
