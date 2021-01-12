#include<stdio.h>
int main()
{
    int a,b,i,j;
    printf("enter a number to make table:");
    scanf("%d",&a);
    printf("enter a number to make table:");
    scanf("%d",&b);
    for (i= a;i<=b;i++)
    {
        for(j=1;j<=10;j++)
        {
             printf("%d * %d = %d\n",i,j,i*j);
        }
        printf(" ");
    }
} 