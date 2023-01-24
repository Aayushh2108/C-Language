#include<stdio.h>
int main(){
    int n,r,arm=0,c;
   
    printf("Enter the number :");
    scanf("%d",&n);
     c=n;
    while(n>0){
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
    if(c==arm){
        printf("The number is Armstrong Number");
    }
    else{
        printf("The number is not Armstrong Number");
    }
    return 0;
}