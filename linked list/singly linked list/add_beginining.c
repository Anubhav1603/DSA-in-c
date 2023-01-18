#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

void print_list(struct Node *head);
struct Node *add_beg(struct Node *head, int value);

void print_list(struct Node *head)
{
    if (head == NULL)
    {
        printf("Linked list is empty");
    }
    else
    {
        struct Node *ptr = NULL;
        ptr = head;
        while (ptr != NULL)
        {
            printf("%d\n", ptr->data);
            ptr = ptr->link;
        }
    }
}

struct Node *add_beg(struct Node *head, int value)
{
    printf("New List: \n");
    struct Node *ptr = malloc(sizeof(struct Node));
    ptr->data = value;
    ptr->link = head;
    head = ptr;
    return head;
}

void main()
{
    struct Node *head = NULL;
    head = add_beg(head, 48);
    print_list(head);
    head = add_beg(head, 56);
    print_list(head);
    head = add_beg(head, 95);
    print_list(head);
}