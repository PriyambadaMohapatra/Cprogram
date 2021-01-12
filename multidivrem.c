#include <stdio.h>
int main()
{
    int multiply,divide,remainder,a,b;
    printf("enter a number a:");
    scanf("%d",&a);
    printf("enter a number b:");
    scanf("%d",&b);
    multiply=a*b;
    printf("muliplication an %d and %d is:%d \n",a,b,multiply);
    divide=a/b;
    printf("divide between two no.%d and %d is:%d \n",a,b,divide);
    remainder=a%b;
    printf("remainder ogf two number %d and %d is :%d \n",a,b,remainder);

    return 0;
}
