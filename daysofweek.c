#include<stdio.h>
int main()
{
    int a ;
    printf("enter the no. of the day:");
    scanf("%d",&a);
    if (a==1)
    {
        printf("its sunday!!");
    }
    else if (a==2)
    {
        printf("its monday!!");
    }
    else if (a==3)
    {
        printf("its tuesday!!");
    }
    else if (a==4)
    {
        printf("its wednesday!!");
    }
    else if (a==5)
    {
        printf("its thursday!!");
    }
    else if (a==6)
    {
        printf("its friday!!");
    }
    else if (a==7)
    {
        printf("its saturday!!");
    }
    else
    {
        printf("there are only 7 days,bisi");
    }
       
    
    
    return 0;
}