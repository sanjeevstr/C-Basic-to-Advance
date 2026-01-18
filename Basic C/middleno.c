//* write a c program to check the middle of three number ? //*

#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,c;
    
    printf("enter a number :");
    scanf("%d",&a);
    printf("enter a number :");
    scanf("%d",&b);
    printf("enter a number :");
    scanf("%d",&c);

    if ((a>b && a<c) || (a<b && a>c))
    {
        printf("%d is the middle number",a);
    }
    else if ((b>a && b<c) ||(b<a && b>c))
    {
         printf("%d is the middle ",b);
    }
    else
    {
        printf("%d is the middle number",c);
    }
    
    
    
}