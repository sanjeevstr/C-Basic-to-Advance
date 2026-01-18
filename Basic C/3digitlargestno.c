// write a c program to check the largest of three number


#include <stdio.h>
void main()
{
    int a,b,c;

    printf("enter a number :");
    scanf("%d",&a);
    printf("enter a number :");
    scanf("%d",&b);
    printf("enter a number :");
    scanf("%d",&c);

    if (a>b&&a>c)
    {
        printf("%d is greater\n",a);
    }else if (b>c)
    {
        printf("%d is greater\n",b);
    }
    else
    {
        printf("%d is greater\n",c);
    }
    
}