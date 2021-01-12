#include<stdio.h>
int main()
{
    int C,F;
    printf("enter temp in celsius:");
    scanf("%d",&C);
    F=(C*9/5)+32;
    printf("temperature %d C in F is: %d",C,F);
    return 0;
}
