#include<stdio.h>
void main()
{
    int count=0,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    printf("Number of digits is: %d",count);
}