// Raise one number to the power of another

#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter base: ");
    scanf("%d",&a);
    printf("Enter the power: ");
    scanf("%d",&b);

    int power=1;

    for (int i = 0; i < b; i++)
    {
        power=power*a;
    }
    printf("%d %d %d",a,b,power);
}