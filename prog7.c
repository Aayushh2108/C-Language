#include<stdio.h>
#include<conio.h>
int main()
{
    int num= 1;
    int value;

    value= ++num + ++num + num++ - ++num;

    printf("value of %d\n",value);
    printf("num of %d",num);
    return 0;

}