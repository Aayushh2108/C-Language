#include<stdio.h>
void add();
int main()
{
    add();
    return 0;
}
void add(){
    int a,b,sum;
    printf("\nEnter the two number");
    scanf("%d%d",&a,&b);

    sum=a+b;
    printf("\nAddition=%d",sum);
}