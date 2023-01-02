#include <stdio.h>

int arr[5] = {8, 4, 7, 2, 7}, pos, arr_max_index = 4;

void print_array()
{
    for (int i = 0; i <= arr_max_index; i++)
    {
        printf("%d ", arr[i]);
    }
}

void delete_value(int position)
{
    printf("Deleting %d from above array", arr[position]);
    for (int i = position; i <= arr_max_index; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr_max_index = arr_max_index - 1;
    printf("\n");
}

void main()
{
    printf("Original Array: \n");
    print_array();
    printf("\nPlease enter position to delete value from above array: ");
    scanf("%d", &pos);
    delete_value(pos - 1); // array index start from 0 thats whyy we are reducing array size by 1.
    printf("New Array: \n");
    print_array();
}