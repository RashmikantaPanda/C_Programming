#include <stdio.h>

// Enter n nos of student details and find their average


struct Student
{
    int roll;
    int mark1;
    int mark2;
    float average;
};

int main()
{
    printf("----------STRUCTURE EXAMPLE2----------\n");
    printf("How many student details you want to insert ?\n");
    int n;
    scanf("%d", &n);
    struct Student stud[n];

    for (int i = 0; i < n; i++)
    {
        printf("Details for Student%d : \n", i + 1);
        printf("Enter roll number : ");
        scanf("%d", &stud[i].roll);
        printf("Enter mark1 : ");
        scanf("%d", &stud[i].mark1);
        printf("Enter mark2 : ");
        scanf("%d", &stud[i].mark2);

        stud[i].average = (float)(stud[i].mark1 + stud[i].mark2) / 2;
        printf("Average is  : %f\n\n", stud[i].average);
    }
}
