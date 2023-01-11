#include<stdio.h>
#include<conio.h>
int main()
{
    int choice;
    printf("enter the choice\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        printf("case 1\n");
          break;

        case 2:
        printf("case 2\n");
          break;

        case 3:
        printf("case 3\n");
          break;

        default:
        printf("Invalid Input!");
    }
    return 0;
}