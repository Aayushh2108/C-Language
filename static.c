#include<stdio.h>
void Counter();
int main(){
    Counter();
    Counter();
    Counter();
    return 0;
}
void Counter(){
    static int count=0;
    count++;
    printf("%d ",count);
}