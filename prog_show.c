#include<stdio.h>
void print();
int main()
{
    int x=5,y;
    y=x++;
    print(x,y);
    return 0;

}
void print(int x,int y)
{
    printf("%d%d",x,y);
}

