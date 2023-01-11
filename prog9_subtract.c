#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,sum;
    printf("Enter the num1\n");
    scanf("%d",&num1);
    printf("Enter thr num2\n");
    scanf("%d",&num2);
    
    sum=num1-num2;
    printf("result%d",sum);
    getch();
    return 0;
}