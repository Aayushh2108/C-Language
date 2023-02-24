#include<stdio.h>
int main(){
    int num;
    int naturalSum(int num);
    printf("Enter the natural number :");
    scanf("%d",&num);

    printf("Natural Number is %d",naturalSum(num));
    return 0;

}
int naturalSum(int num){
    if(num==1){
        return 1;
    }else{
        return (num+naturalSum(num-1));
    }
}