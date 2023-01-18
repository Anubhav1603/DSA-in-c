#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void print_list(struct Node *head);
void deletion(struct Node **head, int pos);

void deletion(struct Node **head, int pos)
{
    struct Node *temp = *head;
    if (pos == 1)
    {
        *head = temp->next;
        free(temp);
        return;
    }
    else
    {
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        struct Node *temp1 = temp->next;
        temp->next = temp1->next;
        free(temp1);
    }
}

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
        printf("Elements in Linked list are:\n");
        while (ptr != NULL)
        {
            printf("%d \n", ptr->data);
            ptr = ptr->next;
        }
    }
}

int main()
{
    int pos;
    struct Node *head = malloc(sizeof(struct Node));
    head->data = 12;
    head->next = NULL;

    struct Node *current = malloc(sizeof(struct Node));
    current->data = 54;
    current->next = NULL;
    head->next = current;

    current = malloc(sizeof(struct Node));
    current->data = 55;
    current->next = NULL;
    head->next->next = current;

    current = malloc(sizeof(struct Node));
    current->data = 57;
    current->next = NULL;
    head->next->next->next = current;

    print_list(head);

    printf("Enter position you want to delete at:\n");
    scanf("%d", &pos);
    printf("After deleting:\n");
    deletion(&head, pos);
    print_list(head);
    return 0;
}