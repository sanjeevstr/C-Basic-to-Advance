#include <stdio.h>
#include <math.h>
void main()
{    int n,c=0;
    printf("Enter number : ");
    scanf("%d", &n);
    for(int i = 1; i <=n; i++)
    if (n % i == 0)
    {
        c++;
    }
    if (c==2)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not a prime number");
    }
    if(n==1)
    {
        printf("Not a prime number");
    }
    
}