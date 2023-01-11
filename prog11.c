#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the Number");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("print a is greater");
    }
    else{
        printf("print b is greater");
    }
    getch();
    return 0;
}