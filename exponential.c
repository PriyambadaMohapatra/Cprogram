#include <stdio.h>
int main()
{
    int a,b,i,result;
    printf("enter the value of exp:");
    scanf("%d",&a);
    printf("enter the value of base:");
    scanf("%d",&b);
    result=b;
    for (i=1; i<a;i++)
    {
        result=result*b;
    }
    printf("%d",result);

    return 0;
}
