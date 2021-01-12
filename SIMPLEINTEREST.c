#include<stdio.h>
int main()
{
    int SI,P,R,T;
    printf("enter principal :");
    scanf("%d",&P);
    printf("enter rate:");
    scanf("%d",&R);
    printf("enter time:");
    scanf("%d",&T);
    SI= (P*R*T)/100;
    printf("the simple interest is:%d",SI);

}