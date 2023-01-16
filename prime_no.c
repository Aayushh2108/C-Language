#include<stdio.h>
int is_prime(int );
int main(){
    int num1;
    printf("Enter the number :");
    scanf("%d",&num1);
    is_prime(num1);
    return 0;
}
int is_prime(int num1){
    int x,count=0;
    for(x=1;x<=num1;x++)
    {
        if(num1%x==0)
        count++;
    }if(count==2){
        printf("The number is prime ");
    }
    else{
        printf("The number is not prime number ");
    }
}