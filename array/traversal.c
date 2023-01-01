#include <stdio.h>

int arr[5] = {1, 3, 4, 5, 6}; // initializing value in array at time of declaration
int new_arr[5];

void simple_traveral()
{
    printf("Simple Traversal\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void taking_user_input()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Enter your %d element: ", i + 1);
        scanf("%d", &new_arr[i]);
    }
}

void user_input_traversal()
{
    printf("User input simple traversal\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void main()
{
    simple_traveral();
    taking_user_input();
    user_input_traversal();
}