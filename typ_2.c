#include<stdio.h>
void add(int,int);
int main()
{
    int a,b;
    printf("Enter the two number \n:");
    scanf("%d%d",&a,&b);
    add(a,b);
}
void add(int a,int b){
    int sum;
    sum=a+b;
    printf("\nAddition =%d",sum);
}