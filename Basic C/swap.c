#include <stdio.h>
void main ()
{
    int a,b,c,d;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping: a = %d, b = %d\n", a, b);
    
}