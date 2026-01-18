// check the nubmer is divisable by 3 and 7

#include <stdio.h>
void main()
{
    int a;
    printf("enter a number :");
    scanf("%d",&a);

    if (a%3==0 && a%7==0)
    {
        printf("%d is divisable by 3 and 7",a);
    }
    else
    {
        printf("%d is not divisable by 3 and 7",a);
    }
    
}