#include<stdio.h>
int main(){
    int a[5];
    input(a,5);
    return 0;
}
void input(int b[],int N){
    int i;
    printf("Enter the %d number :",N);
    for(i=0;i<9;i++)
    scanf("%d",b[i]);
    printf("The number is %d",b[i]);
}