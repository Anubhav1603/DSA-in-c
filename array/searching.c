#include <stdio.h>
#include <stdbool.h>

int arr[5] = {1, 2, 3, 7, 6}, search_item = 8; // hardcoded the search item
int user_search_input;
bool flag = false;

void search_array(int si)
{
    for (int i = 0; i < 5; i++)
    {
        if (si == arr[i])
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
    {
        printf("Item found\n");
    }
    else
    {
        printf("Item not found\n");
    }
}

void user_input_search_array(int si)
{
    for (int i = 0; i < 5; i++)
    {
        if (si == arr[i])
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
    {
        printf("Item found\n");
    }
    else
    {
        printf("Item not found\n");
    }
}

void main()
{
    search_array(search_item);

    printf("Enter your value to be searched: ");
    scanf("%d", &user_search_input);
    user_input_search_array(user_search_input);
}