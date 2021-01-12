#include <stdio.h>
int main()
{
    float fahrenheit,C;
    printf("enter temperature in fahrenheit:");
    scanf("%f",&fahrenheit);
    C= (fahrenheit-32)*5/9;
    printf("The temperature %f F in C is: %f ",fahrenheit,C);
    return 0;
}
