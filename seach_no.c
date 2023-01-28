#include <stdio.h>
int main()
{
    int search(int num[], int value);
    int num[10] = {12, 34, 15, 56, 65, 74, 68, 90, 87, 55};
    int value = 74;

    int index = search(num, value);
    if (index == -1)
    {
        printf("value not found ");
        // printf("value found at index %d ",index);
    }
    else
    {
        // printf("value not found ");
        printf("value found at index %d ", index);
    }
    return 0;
}
int search(int num[], int value)
{
    for (int i = 0; i < 10; i++)
    {
        if (num[i] == value)
        {
            return i;
        }
    }
    return -1;
}