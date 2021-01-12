#include <stdio.h>
int main()
{
    int n, i;
    printf("enter value of n:");
    scanf("%d",&n);
    i=1;
    do
    {
       printf("%d\n",i);
       i++;
    } 
    while (i<=n);
    
    return 0;
}