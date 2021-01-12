#include<stdio.h>
int main()
{
    char a;
    printf("enter a value:");
    scanf("%c",&a);
    printf("ASCII value is ",a);
    if ((a>=97 && a<=122)||(a>=65 && a<=90))
    {
        printf("%c is character",a);
    }
    else if (a>=48 && a<= 57)
    {
        printf("%c is digit",a);
    }
    else
    {
        printf("%c is a special character",a);
    }
    
}