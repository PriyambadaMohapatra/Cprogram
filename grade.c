#include<stdio.h>
int main()
{
    int percentage;
    printf("enter your percentage:");
    scanf("%d",&percentage);
    if (percentage>90)
    {
        printf("A Grade");
    }
    
    else if (percentage>80)
    {
       printf("B1 Grade");
    }
    else if (percentage>70)
    {
        printf("B2 Grade");
    }
    else if (percentage>60)
    {
        printf("C Grade");
    }
    else
    {
        printf("fail");
    }
    
    
    

    return 0;
}
