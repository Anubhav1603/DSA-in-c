#include <stdio.h>

int arr[5] = {4, 67, 2, 5, 3}, idx, arr_max_index = 4, val;

void print_array()
{
    for (int i = 0; i <= arr_max_index; i++)
    {
        printf("%d ", arr[i]);
    }
}

void update_value(int position, int value)
{
    arr[position] = value;
}

void main()
{
    printf("Original array: \n");
    print_array();
    printf("\nPlease enter the position at which you want to replace the value: ");
    scanf("%d", &idx);
    printf("\nPlease enter the value you want to insert: ");
    scanf("%d", &val);
    update_value(idx - 1, val);
    printf("New Array: ");
    print_array();
}