#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter a number a:");
    scanf("%d",&a);
    printf("enter a number b:");
    scanf("%d",&b);
    printf("enter a number c:");
    scanf("%d",&c);
    if (a<b && a<c)
    {
        printf("%d is the samllest no.",a);
    }
    else if (b<a && b<c)
    {
        printf("%d is smallest",b);
    }
    else 
    {
        printf("%d id smallest",c);
    }
    
    return 0;
}
