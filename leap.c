#include<stdio.h>
#include<conio.h>
int main()
{ 
    int y;
    printf("Enter year:");
    scanf("%d",&y);
     if(y%400==0){
        printf("year is leap year");
     }
     else if(y%4==0 && y%100!=0){
        printf("year is leap year");
     }
     else{
        printf("year is not leap year");
     }
     getch();
    return 0;
}
