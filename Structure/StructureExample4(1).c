#include <stdio.h>

// Enter n nos of student details and find their average
//Using pointer

struct Student
{
    int roll;
    int mark1;
    int mark2;
    float average;
};

int main()
{
    printf("How many student details you want to insert ?\n");
    int n;
    scanf("%d", &n);

    struct Student *ptr, stud[n];
    ptr = stud;

    for (int i = 0; i < n; i++)
    {

        // Using pointer varibale
        printf("\nEnter roll number : ");
        scanf("%d", &(ptr->roll));
        printf("Enter mark1 : ");
        scanf("%d", &(ptr->mark1));
        printf("Enter mark2 : ");
        scanf("%d", &(ptr->mark2));

        ptr->average = (float)(ptr->mark1 + ptr->mark2) / 2;
        printf("Average is  : %f", ptr->average);

        ptr++;
    }
}
