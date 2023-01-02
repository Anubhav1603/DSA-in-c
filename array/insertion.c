#include <stdio.h>

int arr[6] = {1, 3, 5, 7, 8}, val, pos, array_len = 5;

void print_array()
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}

void insert_value(int value, int position)
{
    for (int i = array_len; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
}

int main()
{
    printf("Original array: ");
    print_array();
    printf("Enter the int value you want to insert: ");
    scanf("%d", &val);
    printf("Enter the position you want to insert the value: ");
    scanf("%d", &pos);
    insert_value(val, pos - 1); // decrease pos by 1 because index start from 0
    printf("New array: ");
    print_array();
}