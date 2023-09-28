#include <stdio.h>

// Enter a student details and find their average (Using pointer)

struct Student
{
    int roll;
    int mark1;
    int mark2;
    float average;
};

int main()
{
    struct Student *ptr, stud;
    ptr = &stud;

/*
    //Without using pointer
    printf("Enter roll number : ");
    scanf("%d", &(stud.roll));
    printf("Enter mark1 : ");
    scanf("%d", &(stud.mark1));
    printf("Enter mark2 : ");
    scanf("%d", &(stud.mark2));

    stud.average = (float)(stud.mark1 + stud.mark2) / 2;

    printf("Average is  : %f", stud.average);/

*/

    //Using pointer varibale
    printf("Enter roll number : ");
    scanf("%d", &(ptr->roll));
    printf("Enter mark1 : ");
    scanf("%d", &(ptr->mark1));
    printf("Enter mark2 : ");
    scanf("%d", &(ptr->mark2));

    ptr->average = (float)(ptr->mark1 + ptr->mark2) / 2;

    printf("Average is  : %f", ptr->average);
}
