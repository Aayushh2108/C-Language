#include<stdio.h>
void is_Armstrong(int );
int main(){
    int n,c;
    printf("Enter the number :");
    scanf("%d",&n);
    is_Armstrong(n);
    return 0;
}
void is_Armstong(int n)
{
    int n,c,r,arm=0;
        c=n;

    while(n>0)
    {
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
    if(c==arm){
        printf("The number is Armstrong Number ");
    }else{
        printf("The number is not Armstrong Number ");
    }
}