#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,num3;
     printf("Enter the Number");
    scanf("%d%d%d",&num1,&num2,&num3);
    (num1>num2 && num1>num3)?printf("Number 1 is Greater"):
    (num2>num1 && num2>num3)?printf("Number 2 is Greater"):
    printf("Number 3 is greater");
    getch();
    return 0;
}