#include<stdio.h>
void display();
int main(){
   auto int a=10;
    printf("%d ",a);

    display();
    // printf("%d ",b);
    printf("%d ",a);
    return 0;
}
void display(){
    auto int b=40;
    printf("%d ",b);
}