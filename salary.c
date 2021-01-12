#include<stdio.h>
int main()
{
    int gross;
    float salary;
    printf("enter your salary:");
    scanf("%f",&salary);
    gross=((0.8*salary)+(0.5*salary)+(0.1*salary)+salary);
    printf("gross=%d",gross);
    return 0;
}
