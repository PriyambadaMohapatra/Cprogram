#include<stdio.h>
int main()
{
    float units,a;
    printf("enter the unit of power you consume:");
    scanf("%f",&units);
    if(units<=100)
    {
        a= units*2,25;
        printf("total amount is %f",a);
    }
    else if(units>100 && units<200 )
    {
        a=225+((units - 100)*3.00);
        printf("total amount is %f",a);
    }
    else if(units>200 && units<500 )
    {
        a=525+((units -200)*4.25);
        printf("total amount is %f",a);
    }
    else
    {
        a= 1800+((units -500)*7.00);
        printf("total amount is %f",a);
    }
    
}