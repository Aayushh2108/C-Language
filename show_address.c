#include<stdio.h>
int main(){
    int age=22;
    int *ptr=&age;
    int _age=*ptr;

    // printf("%d",_age);
    //Address
    // printf("%p",&age);
    printf("%u\n",&age);

    printf("%u\n",ptr);
    printf("%u\n",&ptr);
    printf("%u\n",*ptr);
    printf("%u\n",*&ptr);
}