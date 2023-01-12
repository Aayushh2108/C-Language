#include<stdio.h>
void main(){
    int oct,hexa;
    printf("Enter the octal number :");
    scanf("%o",&oct);

    printf("The octal number is %o and its hexadecimal number is %x \n",oct,oct);

    printf("Enter the Hexadecimal number :");
    scanf("%x",&hexa);

    printf("The Hexa decimal Number is %x and its octal number is %o",hexa,hexa);
    
}