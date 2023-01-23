#include <stdio.h>
int main()
{
    int num[10] = {12, 15, 34, 56, 65, 78, 90, 87, 66, 21};
    int value = 65;

    for (int i = 0; i <= 10; i++)
    {
        if (num[i] == value)
        {
            printf("Found at index %d ", i);
            break;
        }

        if (i == 10)
        {
            printf("value not found ");
        }
    }
}