#include<stdio.h>
int main()
{
    int marks[3];
    printf("Enter the phy: ");
    scanf("%d",&marks[0]);

    printf("Enter thr chem: ");
    scanf("%d",&marks[1]);

    printf("Enter the maths: ");
    scanf("%d",&marks[2]);

    printf("phy= %d, chem= %d, maths= %d", marks[0],marks[1],marks[2]);
    return 0;
}