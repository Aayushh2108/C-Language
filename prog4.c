#include<stdio.h>
#include<conio.h>
int main()
{

    int num=1;
    int value;
   
  
    value=++num + num++;
    // value +=10;
    printf("value=%d",value);
    printf("num=%d",num);

    getch();
    return 0;
}