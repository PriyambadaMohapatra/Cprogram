#include <stdio.h>
int main()
{
    int a,i,fact;
    printf("enter a number:");
    scanf("%d",&a);
    fact=1;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
        
    }
    printf("%d",fact);

    return 0;
}
