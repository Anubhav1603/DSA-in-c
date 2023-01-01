#include <stdio.h>
#include <stdbool.h>

int arr[5] = {1, 2, 3, 7, 6}, search_item = 8; // hardcoded the search item
bool flag = false;

void search_array(int si)
{
    for (int i = 0; i < 5; i++)
    {
        if (si == arr[i])
        {
            printf("%d\n", arr[i]);
            printf("%d\n", si);
            flag = true;
            printf("%d\n", flag);
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
}