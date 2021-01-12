#include <stdio.h>
int main()
{
    int cp,sp;
    printf("enter the cost price:");
    scanf("%d",&cp);
    printf("enter the selling price:");
    scanf("%d",&sp);
    if (sp>cp)
    {
        printf("profit!!!");
    }
    else
    {
        printf("loss");
    }


}