#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two number for swapping:");
    scanf("%d""%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("print the swapped number %d %d",a,b);
    return 0;
}
