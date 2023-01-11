#include<stdio.h>
#include<conio.h>

 int displayAge();
int main()
 {
    int num1,num2;
    printf("\nEnter the num1: ");
    scanf("%d",&num1);
    printf("\nEnter the num2: ");
    scanf("%d",&num2);
    displayAge(num1,num2);
    
        getch();
        return 0;
 }
int displayAge(int num1 ,int num2)
 {
    if(num1>num2){
        printf("num1 is greater");
        // return 1;
    }
    else{
        printf("num2 is greater");
        // return 0;
    }
 }