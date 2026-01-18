// check if sum of two numbers is even or odd

#include <stdio.h>
void main()
{
    int x,y,sum;
    printf("enter two number :");
    scanf("%d%d",&x,&y);
    sum=x+y;
    if(sum%2==0)
    {
        printf("sum is even");
    }
    else
    {
        printf("sum is odd");
    }
    
}