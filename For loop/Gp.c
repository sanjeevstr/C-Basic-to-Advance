#include<stdio.h>
void main()
{
    int n;

    printf("Enter a NUmber: ");
    scanf("%d", &n);

    int a = 1;

    for (int i = 0; i <= n ; i++)
    {
        printf("%ld ", a);
        a=a*2;

    }
    
}