#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter Alphabet: ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
        printf("vowel");
    }
    else{
        printf("consonant");
    }
    return 0;

}