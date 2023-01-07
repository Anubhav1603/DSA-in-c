#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void traversal(struct node *head)
{
    if (head == NULL)
    {
        printf("Linked list is empty");
    }
    else
    {
        struct node *ptr = NULL;
        ptr = head;
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->link;
        }
    }
}

void main()
{
    struct node *head = malloc(sizeof(struct node)); // reserving memory for node
    head->data = 45;                                 // adding data to node;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 56;
    current->link = NULL;
    head->link = current; // linking head node to current node

    current = malloc(sizeof(struct node)); // used the same current node to save memory
    current->data = 75;
    current->link = NULL;
    head->link->link = current; // linking head node to newly created current node

    traversal(head);
}