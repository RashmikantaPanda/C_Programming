#include<stdio.h>

struct Student
{
    int roll;
    int mark1;
    int mark2;
    float average;
};

struct Student stud1;

int main(){
    printf("----------STRUCTURE EXAMPLE----------\n");
    printf("Enter roll number : ");
    scanf("%d",&stud1.roll);
    printf("Enter mark1 : ");
    scanf("%d",&stud1.mark1);
    printf("Enter mark2 : ");
    scanf("%d",&stud1.mark2);

    stud1.average=(float)(stud1.mark1+stud1.mark2)/2;

    printf("Average is  : %f",stud1.average);
}
