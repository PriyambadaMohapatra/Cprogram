#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers to find the smallest:");
    scanf("%d" "%d" "%d",&a,&b,&c);
    ((a<b)&&(a<c))?
    printf("%d is smallest",a):
    ((b<a)&&(b<c))?
    printf("%d is the smallest",b):
    printf("%d is smallest", c);
    
}