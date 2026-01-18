// product of two number greater than 100

#include<stdio.h>
void main()
{
    int m,n,product;
    printf("Enter two number : ");
    scanf("%d%d",&n,&m);
    product=n*m;
    if (product>100)
    {
        printf("The product is greater than 100\n");
    }
    else
    {
        printf("The product is less than 100\n");
    }
}