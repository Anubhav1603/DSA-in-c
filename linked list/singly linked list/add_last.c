#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traverse_list(struct node *head);
struct node *add_last(struct node **head, int value);

struct node *add_last(struct node **head, int value)
{

    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        struct node *LastNode = *head;
        while (LastNode->next != NULL)
        {
            LastNode = LastNode->next;
        }
        LastNode->next = newNode;
    }
}

void traverse_list(struct node *head)
{
    if (head == NULL)
    {
        printf("Linked list is empty");
    }
    else
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp = head;
        while (temp != NULL)
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL");
        printf("\n");
    }
}

void main()
{
    struct node *head = NULL;
    add_last(&head, 14);
    add_last(&head, 34);
    add_last(&head, 44);
    add_last(&head, 64);
    add_last(&head, 74);
    traverse_list(head);
}