#include<stdio.h>
void main()
{
    int dec,oct;
    printf("Enter the decimal number :\n");
    scanf("%d",&dec);

    printf("The decimal number is %d and its octal number is %o\n",dec,dec);

    printf("Enter the octal number :\n");
    scanf("%o",&oct);
    printf("The number is octal number %o and its deciaml number is %d",oct,oct);
    
}