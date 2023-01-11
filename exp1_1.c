#include<stdio.h>

int main()
{
    int age,x;
    char gender,insuer;
    printf("Enter gender: ");
    scanf("%s",&gender);
    printf("Enter age:");
    scanf("%d",&age);
    printf("Are you Smoker\n");
    scanf("%s",&insuer);

    if(age==21 && age<=30){
       x=10000;
    }
    else if(age>=31 && age<=40){
        x=15000;
    }
    else if(age>=41 && age<=50){
        x=20000;
    }
    else if(age>=51 && age<=60){
       x=40000;
    }
    else{
        printf("Insurance is not possible");
    }

    

    if(gender=='f')
        x=(x*90)/100;

    if(insuer=='s')
        x=(x*110)/100;
        
       printf("result=%d",x);
    
    return 0;
}
    

