// check if last digit of two numbers are same

#include <stdio.h>
void main()
{
    int a,b;
    printf("enter a number :");
    scanf("%d",&a);
    printf("enter a number :");
    scanf("%d",&b);
    if (a%10==b%10)
    {
        printf("last digit is same");
    }
    else
    {
        printf("last digit is not same");
    }
    
    
}