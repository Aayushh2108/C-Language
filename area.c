#include<stdio.h>
float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);
int main(){
    float a,b;
    printf("enter the number");
    scanf("%f%f",&a,&b);
    printf("Area of %f",rectangleArea(a,b));
   
    return 0;
}
float squareArea(float side){
    return side*side; 
}
float circleArea(float rad){
    return 3.14*rad*rad;
}
float rectangleArea(float a, float b){
    return a*b;
}