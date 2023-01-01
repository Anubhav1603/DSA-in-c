#include <stdio.h>

int arr[5] = {1, 3, 4, 5, 6};

void simple_traveral()
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void main()
{
    simple_traveral();
}