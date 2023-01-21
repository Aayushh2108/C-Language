#include<stdio.h>
int main(){
    int num;
    int factorial(int num);

    printf("Enter the number :");
    scanf("%d",&num);

    printf("factorial number is %d",factorial(num));

}
int factorial(int num){
    if(num<2){
        return 1;
    }else{
        return num *factorial(num-1);
    }

}