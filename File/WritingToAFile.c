#include <stdio.h>
#include <stdlib.h>

int main()
{
//    printf("---------WRITING TO A FILE----------");
    FILE *ptr;
    int ch, i;
    ptr = fopen("Abc.txt", "w");

    for (i=0; i<20; i++)
    {
        ch=getchar();
        if(ch>96){
            ch=ch-32;
        }
        putc(ch,ptr);
    }
    fclose(ptr);
}
