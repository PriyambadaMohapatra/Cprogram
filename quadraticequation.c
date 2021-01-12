#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,D,root1,root2;
    printf("enter the coefficient of x^2:");
    scanf("%d",&a);
    printf("enter the coefficient of x:");
    scanf("%d",&b);
    printf("enter the constant:");
    scanf("%d",&c);
    printf("the roots of quadratic equation are:");
    D=(b*b)-(4*a*c);
    if (D==0)
    {
        printf("real and equal roots");
        root1=root2=0;
        root1 = -b/2*a;
        printf("roots are %d %d",root1,root2);
    }
    else if (D>0)
    {
        printf("real and distinct roots\n");
        root1 = (-b + sqrtf(D))/2*a;
        root2 = (-b - sqrtf(D))/2*a;
        printf("root 1:\n",root1);
        printf("root 2:\n",root2);
    }
    else
    {
        printf("no real roots possible");
    }
    return 0;
}
