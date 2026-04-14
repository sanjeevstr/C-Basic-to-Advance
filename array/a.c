#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter 5 numbers:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The numbers are:");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}