#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void createList()
{
    if (head == NULL)
    {
        int data;
        struct node *ptr, *temp;
        ptr = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter data : ");
        scanf("%d", &data);

        ptr->data = data;
        ptr->next = NULL;
        head = ptr;
        temp = head;
        char ch;
        printf("Do you want to insert another (Y/N) ?\n");
        scanf(" %c", &ch);
        while (ch == 'y' || ch == 'Y')
        {
            struct node *ptr1;
            ptr1 = (struct node *)malloc(sizeof(struct node));
            printf("\nEnter data : ");
            scanf("%d", &data);
            ptr1->data = data;
            ptr1->next = NULL;
            temp->next = ptr1;
            temp = ptr1;
            printf("Do you want to insert another ?\n");
            scanf(" %c", &ch);
        }
    }
    else
        printf("List is already created !");
}

void display()
{
    if (head == NULL)
    {
        printf("List is Empty !");
    }
    else
    {
        struct node *ptr;
        ptr = head;
        printf("\nList is : ");
        while (ptr != NULL)
        {
            printf("%d -->", ptr->data);
            ptr = ptr->next;
        }
        printf("NULL\n");
    }
}

void insertAtFirst()
{
    int data;
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node *));
    printf("\nEnter data : ");
    scanf("%d", &data);
    ptr->data = data;
    ptr->next = head;
    head = ptr;

    printf("\nOne node inserted at begining");
}

void insertAtLast()
{
    int data;
    struct node *ptr, *temp;

    ptr = (struct node *)malloc(sizeof(struct node *));
    printf("\nEnter data : ");
    scanf("%d", &data);
    ptr->data = data;
    ptr->next = NULL;
    if (head == NULL)
        head = ptr;
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
    }

    printf("\nOne node inserted at last");
}

void insertAtPosition()
{
    int position, data;
    struct node *ptr, *temp;
    ptr = malloc(sizeof(struct node *));
    printf("\nEnter the position : ");
    scanf("%d", &position);
    printf("\nEnter data : ");
    scanf("%d", &data);

    if (position == 1)
    {
        temp = head;
        ptr->data = data;
        ptr->next = temp;
        head = ptr;
        printf("\nOne node inserted at position %d with data %d", position, data);
    }
    else
    {
        temp = head;
        int countPos = 1;
        while (position != countPos + 1 && temp->next != NULL)
        {
            temp = temp->next;
            countPos++;
        }
        if (position == countPos + 1)
        {

            ptr->data = data;
            ptr->next = temp->next;
            temp->next = ptr;
            printf("\nOne node inserted at position %d with data %d", position, data);
        }
        else
        {
            printf("\nPlease enter a valid position");
        }
    }
}

void deleteFirst()
{
    struct node *temp;
    if (head != NULL)
    {
        temp = head;
        head = temp->next;
        printf("Node with data %d is deleted", temp->data);
        free(temp);
    }
    else
    {
        printf("List is empty. No Deletion possible !");
    }
}

void deleteLast()
{
    if (head != NULL)
    {
        struct node *temp, *prev;
        temp = head;
        while (temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        printf("\nNode with data %d is deleted", temp->data);
        free(temp);
    }
    else
    {
        printf("List is empty. No Deletion possible !");
    }
}

void deleteFromPostion()
{
    if (head != NULL)
    {
        struct node *temp, *prev;
        int position, countPos = 1;
        printf("\nEnter the position : ");
        scanf("%d", &position);
        temp = head;
        prev = NULL;
        while (position != countPos && temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
            countPos++;
        }
        if (position == countPos)
        {
            if (prev == NULL)
            {
                head = temp->next;
            }
            else
            {
                prev->next = temp->next;
            }
            temp->next = NULL;
            printf("Node deleted at position %d with data %d", position, temp->data);
            free(temp);
        }
        else
        {
            printf("Invalid Position.Deletion is not possible !");
        }
    }
    else
    {
        printf("List is empty. No deletion possible !");
    }
}

void reverseLinkedList()
{
    if (head != NULL)
    {
        struct node *prev, *temp, *ptr;
        temp = head;
        prev = NULL;
        ptr = NULL;
        while (temp != NULL)
        {
            ptr = temp->next;
            temp->next = prev;
            prev=temp;
            temp=ptr;
        }
        head=prev;
        printf("\nList is reversed");
    }
    else
    {
        printf("\nList is Empty !");
    }
}

int main()
{
    printf("--------LINKED LIST OPERATIONS---------\n");

    int choice = 1;
    while (choice)
    {
        printf("\n\n0. Exit \n1. Create LinkedList \n2. Insert at Begining \n3. Insert at End \n4. Insert At Position ");
        printf("\n5. Delete First \n6. Delete Last \n7. Delete from Position");
        printf("\n8. Reverse List");
        printf("\n10. Display \n11. Clear Screen ");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            printf("Program exited");
            exit(0);

        case 1:
            createList();
            break;

        case 2:
            insertAtFirst();
            break;
        case 3:
            insertAtLast();
            break;
        case 4:
            insertAtPosition();
            break;

        case 5:
            deleteFirst();
            break;
        case 6:
            deleteLast();
            break;
        case 7:
            deleteFromPostion();
            break;
        case 8:
            reverseLinkedList();
            break;

        case 10:
            display();
            break;
        case 11:
            system("cls");
            break;

        default:
            printf("Invalid Input");
            break;
        }
    }

    return 1;
}